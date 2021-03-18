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

Princess::Princess() : Unit("Princess", 20, 1, 2, 1) {
}
const char* Princess::GetName() {
    return name_;
}

int Princess::GetDamage() {
    return damage_;
}

int Princess::GetHealth() {
    return health_;
}

int Princess::GetGold() {
    return gold_;
}

const char* Princess::GetPrivilege() {
    return "You are from the royal family, so you have a double health(20) and a double gold(2)!";
}

int Princess::GetLevel() {
    return level_;
}
