#include <iostream>
#include "GameController.hpp"
#include "GameState.hpp"
#include "OngoingGameState.hpp"

int main() {
    // StateContext statecontext;
    // GameState* currentState = new MenuGameState(statecontext);
    // currentState->openState();
    // currentState = new OngoingGameState(statecontext);
    // currentState->openState();
    // currentState->closeState();
    GameController control;
    control.run();
};