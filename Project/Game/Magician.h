#pragma once
#include "Unit.h"

class Magician: public Unit {
public:
    Magician();
    const char* GetPrivilege() override;
};

Magician::Magician() : Unit("Magician", 50, 1, 0, 0) {
}

const char* Magician::GetPrivilege() {
    return "You have a 50 health at the beginning!";
}
