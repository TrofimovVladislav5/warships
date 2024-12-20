#include "BattleView.h"

BattleView::BattleView(GameStateDTO* matchDto)
    : playerField(GameFieldView(matchDto->playerField))
    , enemyField(GameFieldView(matchDto->enemyField))
    , skillManager(SkillManagerView(matchDto->playerSkillManager))
{}

void BattleView::printBattleState() {
    playerField.displayField(false, false);
    enemyField.displayField(true, true);
    skillManager.displayCurrentSkill();
    skillManager.displayAvailableSkills();
}
