#pragma once
#include "GameView.hpp"

class MenuGameView : public GameView {
public:
    MenuGameView() = default;
    void displayAvailableCommands(const GameStateDTO* currentMatch) override;
    void displayOpenState() override;
    void displayCloseState() override;
};