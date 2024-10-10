#include "GameField.h"
#include "GameFieldView.h"
#include "ShipManager.h"

int main()
{
    ShipManager manager({4,3,2,1});
    GameField gameField(10,10);
    GameFieldView viewField(gameField);

    gameField.placeShip(manager[0], {0,0}, Direction::horizontal);
    gameField.placeShip(manager[1], {3,5}, Direction::horizontal);
    gameField.placeShip(manager[2], {7,7}, Direction::vertical);
    gameField.placeShip(manager[3], {9,9}, Direction::vertical);

    gameField.attack({0,0}, 1);
    gameField.attack({0,0}, 1);
    gameField.attack({1,0}, 1);
    gameField.attack({1,0}, 1);
    gameField.attack({2,0}, 1);
    gameField.attack({2,0}, 1);
    gameField.attack({3,0}, 1);
    gameField.attack({3,0}, 1);
    
    viewField.displayField();

    return 0;
}
