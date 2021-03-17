#pragma once
#include "Unit.h"

class Human: public Unit {
public:
    Human();
    const char* GetName() override;
    int GetDamage() override;
    int GetHealth() override;
    int GetGold() override;
    const char* GetPrivilege() override;
    int GetLevel() override;
};