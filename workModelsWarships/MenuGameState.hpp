#pragma once
#include "GameState.hpp"
#include <vector>
class MenuGameState : public GameState {
public:
    MenuGameState(StateContext& context);
    ~MenuGameState() override;
    void openState() override;
    void closeState() override;
    void updateState() override;
    GameState* transitToState() override;
};