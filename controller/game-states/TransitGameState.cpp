#include "TransitGameState.h"

#include "ConfigCommandBuilder.h"
#include "DefaultParameterBuilder.h"
#include "DefaultParserError.h"
#include "MenuGameState.h"
#include "ShutdownGameState.h"
#include "StateMessages.h"
#include "TypesHelper.h"
#include "void/VoidParser.h"

void TransitGameState::handleExit(ParsedOptions options) {
    latestCommand = "exit";
}

void TransitGameState::handleMenu(ParsedOptions options) {
    latestCommand = "menu";
}

TransitGameState::TransitGameState(StateContext &context)
    : GameState(context)
{
    ConfigCommandBuilder<void> commandBuilder;
    DefaultParameterBuilder parameterBuilder;

    inputScheme = {
        {"exit", ParserCommandInfo(
            commandBuilder
                .setCallback(TypesHelper::methodToFunction(&TransitGameState::handleExit, this))
                .setDescription("Leave the game")
                .setDisplayError(DefaultParserError::WrongFlagValueError)
                .buildAndReset()
            )
        },
        {"menu", ParserCommandInfo(
            commandBuilder
                .setCallback(TypesHelper::methodToFunction(&TransitGameState::handleMenu, this))
                .setDescription("Return to main menu")
                .setDisplayError(DefaultParserError::WrongFlagValueError)
                .buildAndReset()
            )
        }
    };
}

void TransitGameState::openState() {
}

void TransitGameState::updateState() {
    StateMessages::awaitCommandMessage();
    std::string input = context.getInputReader()->readCommand();
    VoidParser parser(this->inputScheme, DefaultParserError::CommandNotFoundError);
    parser.executedParse(input);
}

void TransitGameState::closeState() {
}

GameState* TransitGameState::transitToState() {
    if (latestCommand == "exit") {
        return new ShutdownGameState(context);
    } else if (latestCommand == "menu") {
        return new MenuGameState(context);
    }

    return nullptr;
}
