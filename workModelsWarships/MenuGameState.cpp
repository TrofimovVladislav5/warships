#include "MenuGameState.hpp"
#include "MenuGameView.hpp"

MenuGameState::MenuGameState(StateContext& context)
    : GameState(context)
{
    view = new MenuGameView();
}

MenuGameState::~MenuGameState() = default;

void MenuGameState::openState() {
    view->displayOpenState();
    view->displayAvailableCommands(context.currentMatch);
}

void MenuGameState::closeState() {
    view->displayCloseState();
}

void MenuGameState::updateState() {
    view->displayAvailableCommands(context.currentMatch);
    // Take command from parser try to transit
}

GameState* MenuGameState::transitToState() {
    return nullptr;
}