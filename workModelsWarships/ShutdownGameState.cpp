#include "ShutdownGameState.hpp"
#include "ShutdownGameView.hpp"
#include "ViewHelper.hpp"

ShutdownGameState::ShutdownGameState(StateContext& context)
    : GameState(context)
{
    view = new ShutdownGameView();
}

bool ShutdownGameState::isFinished() {return true;}

void ShutdownGameState::openState() {
    ViewHelper::consoleOut("OPENED");
}

void ShutdownGameState::closeState() {
    ViewHelper::consoleOut("CLOSED");
}

void ShutdownGameState::updateState() {
    ViewHelper::consoleOut("Update");
}

GameState* ShutdownGameState::transitToState() {
    return nullptr;
}
