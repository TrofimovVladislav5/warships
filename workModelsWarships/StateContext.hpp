#pragma once
#include "GameStateDTO.hpp"
class StateContext{
public:
    StateContext();
    GameStateDTO* currentMatch;
};