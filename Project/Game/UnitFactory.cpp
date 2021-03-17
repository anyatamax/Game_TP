#include "UnitFactory.h"
#include "Knight.h"
#include "Human.h"
#include "Magician.h"
#include "Princess.h"

Unit* UnitFactory::CreateUnit(UnitID id) {
    switch (id) {
        case KnightID:
            unit = new Knight;
            break;
        case MagicianID:
            unit = new Magician;
            break;
        case HumanID:
            unit = new Human;
            break;
        case PrincessID:
            unit = new Princess;
            break;
    }
    return unit;
}
