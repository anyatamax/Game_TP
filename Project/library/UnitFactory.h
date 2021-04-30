#pragma once
#include "Unit.h"
#include "Knight.h"
#include "Human.h"
#include "Magician.h"
#include "Princess.h"
#include <memory>

enum UnitID {
    KnightID,
    HumanID,
    MagicianID,
    PrincessID
};

class UnitFactory {
    std::shared_ptr<Unit> unit;
public:
    UnitFactory() = default;
    std::shared_ptr<Unit> CreateUnit(UnitID id);
    ~UnitFactory() = default;
};
