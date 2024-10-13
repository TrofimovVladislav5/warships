#pragma once
#include "GameView.hpp"

class ShutdownGameView : public GameView {
public:
    ShutdownGameView() = default;
    void displayAvailableCommands(const GameStateDTO* currentMatch) override;
    void displayOpenState() override;
    void displayCloseState() override;
};