#pragma once
#include "Unit.h"

class Magician: public Unit {
public:
    Magician();
    const char* GetPrivilege() override;
};

