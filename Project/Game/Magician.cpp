#include "Magician.h"
#include "Unit.h"


Magician::Magician() : Unit("Magician", 50, 1, 0, 1) {
}
const char* Magician::GetName() {
    return name_;
}

int Magician::GetDamage() {
    return damage_;
}

int Magician::GetHealth() {
    return health_;
}

int Magician::GetGold() {
    return gold_;
}

const char* Magician::GetPrivilege() {
    return "You have a 50 health at the beginning!";
}

int Magician::GetLevel() {
    return level_;
}
