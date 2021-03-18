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

Human::Human() : Unit("Human", 10, 1, 0, 1) {
}

const char* Human::GetName() {
    return name_;
}

int Human::GetDamage() {
    return damage_;
}

int Human::GetHealth() {
    return health_;
}

int Human::GetGold() {
    return gold_;
}

const char* Human::GetPrivilege() {
    return "You don't have anything special, but you are lucky!";
}

int Human::GetLevel() {
    return level_;
}
