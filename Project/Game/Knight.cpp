#include "Knight.h"

Knight::Knight() : Unit("Knight", 10, 5, 0, 0) {
}

const char* Knight::GetPrivilege() {
    return "You have a 5 damage at the beginning!";
}