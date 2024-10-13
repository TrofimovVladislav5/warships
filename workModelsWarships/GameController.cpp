#include "GameController.hpp"
#include "MenuGameState.hpp"
#include "ShutdownGameState.hpp"

GameController::GameController() 
    : currentState(nullptr)
    , currentMatch(nullptr)
{
    currentContext = StateContext();
}
GameController::~GameController() {
    delete currentMatch;
    delete currentState;
}

void GameController::run() {
    currentState = new MenuGameState(currentContext);
    currentState->openState();
    while (!currentState->isFinished()) {
        GameState* newState = new ShutdownGameState(currentContext);

        if (newState) {
            currentState->closeState();
            currentState = newState;
            currentState->openState();
        }

        currentState->updateState();
    }
}