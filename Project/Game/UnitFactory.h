#pragma once
#include "Unit.h"
#include "Knight.h"
#include "Human.h"
#include "Magician.h"
#include "Princess.h"

enum UnitID {
    KnightID,
    HumanID,
    MagicianID,
    PrincessID
};

class UnitFactory {
    Unit* unit = nullptr;
public:
    UnitFactory() = default;
    Unit* CreateUnit(UnitID id);
    ~UnitFactory() = default;
};
