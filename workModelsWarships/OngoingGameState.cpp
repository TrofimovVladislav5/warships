#include "OngoingGameState.hpp"

OngoingGameState::OngoingGameState(StateContext& context)
    : GameState(context)
{
    view = new OngoingGameView();
}

OngoingGameState::~OngoingGameState() = default;

void OngoingGameState::openState() {
    view->displayOpenState();
    view->displayAvailableCommands(context.currentMatch);
}

void OngoingGameState::closeState() {
    view->displayCloseState();
}

void OngoingGameState::updateState() {

}

GameState* OngoingGameState::transitToState() {
    return nullptr;
}