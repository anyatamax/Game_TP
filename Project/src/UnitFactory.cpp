#include "UnitFactory.h"

std::shared_ptr<Unit> UnitFactory::CreateUnit(UnitID id) {
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