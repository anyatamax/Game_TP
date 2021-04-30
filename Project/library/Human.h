#pragma once
#include "Unit.h"

class Human: public Unit {
public:
    Human();
    const char* GetPrivilege() override;
};
