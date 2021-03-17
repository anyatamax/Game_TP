#pragma once
#include "Unit.h"

class Princess: public Unit {
public:
    Princess();
    const char* GetName() override;
    int GetDamage() override;
    int GetHealth() override;
    int GetGold() override;
    const char* GetPrivilege() override;
    int GetLevel() override;
};
