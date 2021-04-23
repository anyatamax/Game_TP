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
    std::shared_ptr<Unit> CreateUnit(UnitID id) {
        switch (id) {
            case KnightID:
                unit = std::shared_ptr<Unit>(new Knight);
                break;
            case MagicianID:
                unit = std::shared_ptr<Unit>(new Magician);
                break;
            case HumanID:
                unit = std::shared_ptr<Unit>(new Human);
                break;
            case PrincessID:
                unit = std::shared_ptr<Unit>(new Princess);
                break;
        }
        return unit;
    }
    ~UnitFactory() = default;
};
