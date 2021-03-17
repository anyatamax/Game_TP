#include "Knight.h"
#include "Unit.h"

Knight::Knight() : Unit("Knight", 10, 5, 0, 1) {
}

const char* Knight::GetName() {
    return name_;
}

int Knight::GetDamage() {
    return damage_;
}

int Knight::GetHealth() {
    return health_;
}

int Knight::GetGold() {
    return gold_;
}

const char* Knight::GetPrivilege() {
    return "You have a 5 damage at the beginning!";
}

int Knight::GetLevel() {
    return level_;
}