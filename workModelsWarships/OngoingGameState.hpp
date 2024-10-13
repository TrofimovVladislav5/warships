#pragma once
#include "GameState.hpp"
#include "OngoingGameView.hpp"

class OngoingGameState : public GameState {
public:
    OngoingGameState(StateContext& context);
    ~OngoingGameState() override;
    void openState() override;
    void closeState() override;
    void updateState() override;
    GameState* transitToState() override;
};