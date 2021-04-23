#pragma once
#include "Unit.h"

class Princess: public Unit {
public:
    Princess();
    const char* GetPrivilege() override;
};

Princess::Princess() : Unit("Princess", 20, 1, 2, 0) {
}

const char* Princess::GetPrivilege() {
    return "You are from the royal family, so you have a double health(20) and a double gold(2)!";
}
