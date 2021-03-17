#include "Unit.h"

Unit::Unit(const char* name, int health, int damage, int gold, int level)
        : name_(name)
        , health_(health)
        , damage_(damage)
        , gold_(gold)
        , level_(level) {
}