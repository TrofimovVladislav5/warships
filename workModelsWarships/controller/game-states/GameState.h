#pragma once
#include "model/StateContext.h"

class GameState{
protected:
    StateContext& context;
public:
    GameState(StateContext& context);
    virtual ~GameState() = 0;
    virtual void openState() = 0;
    virtual void updateState() = 0;
    virtual void closeState() = 0;
    virtual GameState* transitToState() = 0;
};
