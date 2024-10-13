#include "GameState.hpp"
#include "StateContext.hpp"
GameState::GameState(StateContext& context) 
    : context(context)
    , view(nullptr)
{}

GameState::~GameState() {
    if (view) 
        delete view;
}

bool GameState::isFinished() { return false;}