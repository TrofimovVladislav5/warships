#pragma once
#include "GameField.h"

class GameFieldView {
private:
    GameField& gameField;
    void printUpperBar();
public:
    GameFieldView(GameField& gameField);
    void displayField();
};