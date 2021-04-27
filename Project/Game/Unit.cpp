#include "Unit.h"

Unit::Unit(const char* name, int health, int damage, int gold, int level)
        : name_(name)
        , health_(health)
        , damage_(damage)
        , gold_(gold)
        , level_(level) {
}

const char* Unit::GetName() {
    return name_;
}
int Unit::GetDamage() const {
    return damage_;
}
int Unit::GetHealth() const {
    return health_;
}
int Unit::GetGold() const {
    return gold_;
}
int Unit::GetLevel() const {
    return level_;
}