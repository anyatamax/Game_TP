#include "Human.h"

Human::Human() : Unit("Human", 10, 1, 0, 0) {
}

const char* Human::GetPrivilege() {
    return "You don't have anything special, but you are lucky!";
}