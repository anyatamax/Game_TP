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


Magician::Magician() : Unit("Magician", 50, 1, 0, 1) {
}
const char* Magician::GetName() {
    return name_;
}

int Magician::GetDamage() {
    return damage_;
}

int Magician::GetHealth() {
    return health_;
}

int Magician::GetGold() {
    return gold_;
}

const char* Magician::GetPrivilege() {
    return "You have a 50 health at the beginning!";
}

int Magician::GetLevel() {
    return level_;
}
