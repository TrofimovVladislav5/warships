#pragma once
#include "GameView.hpp"

class OngoingGameView : public GameView {
public:
    void displayAvailableCommands(const GameStateDTO* currentMatch) override;
    void displayOpenState() override;
    void displayCloseState() override;
};