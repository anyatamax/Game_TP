#pragma once
#include "Unit.h"

class Princess: public Unit {
public:
    Princess();
    const char* GetPrivilege() override;
};
