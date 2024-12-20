#pragma once
#include "skills/SkillManager.h"

class SkillManagerView {
private:
    SkillManager* skillManager;
public:
    explicit SkillManagerView(SkillManager* skillManager);
    void displayAvailableSkills();
    void displayCurrentSkill();
};
