#pragma once
#include "Unit.h"

class Knight: public Unit {
public:
    Knight();
    const char* GetPrivilege() override;
};


