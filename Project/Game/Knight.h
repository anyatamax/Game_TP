#pragma once
#include "Unit.h"

class Knight: public Unit {
public:
    Knight();
    const char* GetPrivilege() override;
};

Knight::Knight() : Unit("Knight", 10, 5, 0, 0) {
}

const char* Knight::GetPrivilege() {
    return "You have a 5 damage at the beginning!";
}
