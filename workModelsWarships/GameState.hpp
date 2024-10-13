#pragma once
#include "StateContext.hpp"
#include "GameView.hpp"
class GameState{
protected:
    GameView* view;
    StateContext& context;
public:
    GameState(StateContext& context);
    virtual ~GameState();
    virtual void openState() = 0;
    virtual void updateState() = 0;
    virtual void closeState() = 0;
    virtual GameState* transitToState() = 0;
    virtual bool isFinished();
};
