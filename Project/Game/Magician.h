#pragma once
#include "Unit.h"

class Magician: public Unit {
public:
    Magician();
    const char* GetName() override;
    int GetDamage() override;
    int GetHealth() override;
    int GetGold() override;
    const char* GetPrivilege() override;
    int GetLevel() override;
};