#include "Princess.h"


Princess::Princess() : Unit("Princess", 20, 3, 2, 0) {
}

const char* Princess::GetPrivilege() {
    return "You are from the royal family, so you have a double health(20) and a double gold(2)!";
}

