#include <iostream>
#include <string>
#include <random>
#include "Game/Unit.h"
#include "Game/UnitFactory.h"
#include "Game/Knight.h"
#include "Game/Human.h"
#include "Game/Magician.h"
#include "Game/Princess.h"
#include "Game/Monster.h"

int main() {
    UnitFactory person;
    int number;
    std::string choose;
    std::cout << "Do you want to play?\nPlease enter: Yes/No\n";
    std::cin >> choose;
    if (choose == "Yes") {
        std::cout << "Hello, you can choose a character for your game:\n";
        std::cout << "1. Knight. Privilege: You have a 5 damage at the beginning!\n";
        std::cout << "2. Human. Privilege: You don't have anything special, but you are lucky!\n";
        std::cout << "3. Magician. Privilege: You have a 50 health at the beginning!\n";
        std::cout << "4. Princess. Privilege: You are from the royal family, so you have a double health(20) and a double gold(2)!\n";
        std::cout << std::endl;
        std::cout << "Please, enter the number of the character you chose\n";
        std::cin >> number;
        auto gamer = person.CreateUnit(static_cast<UnitID>(number - 1));
        std::cout << "Great! You character is " << gamer->GetName() << std::endl;
        std::cout << "Your characteristics at the beginning:\n" << "Damage: " << gamer->GetDamage() << "\nHealth: " << gamer->GetHealth() << "\nGold: " << gamer->GetGold() << std::endl;
    }
    else {
        std::cout << "See you later!";
    }
    return 0;
}