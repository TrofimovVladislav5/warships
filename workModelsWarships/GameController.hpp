#pragma once
#include "GameState.hpp"
#include "StateContext.hpp"

class GameController {
private:
    GameState* currentState;
    GameStateDTO* currentMatch;
    StateContext currentContext;
public:
    GameController();
    ~GameController();
    void run();
};