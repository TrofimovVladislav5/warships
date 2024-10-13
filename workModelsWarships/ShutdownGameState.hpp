#pragma once
#include "GameState.hpp"

class ShutdownGameState : public GameState {
public:
    ShutdownGameState(StateContext& context);
    void openState() override;
    void closeState() override;
    void updateState() override;
    GameState* transitToState() override;
    bool isFinished() override;
};