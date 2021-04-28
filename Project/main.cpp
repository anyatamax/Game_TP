#include <iostream>
#include <string>
#include "UnitFactory.h"
#include "ComposeUnits.h"
#include "Fight.h"

int main() {
    UnitFactory person;
    std::string number;
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
        std::cout << "Please, enter the numbers of the character you chose\n";
        std::cin.ignore(32767, '\n');
        std::getline(std::cin, number);
        ComposeUnits units(number);
        if (units.units.empty()) {
            std::cout << "Please, enter the right numbers (For example: 1 2 3 4)\n";
            std::cin.ignore(32767, '\n');
            std::getline(std::cin, number);
            units = ComposeUnits(number);
        }
        while (!units.FinishGame()) {
            Fight(units);
        }
        if (units.GetLevel() == 20) {
            std::cout << "You won a game and get " << units.GetGold() << " gold!!!";
        } else {
            std::cout << "You died at the level " << units.GetLevel() << " and with a gold " << units.GetGold() << "(((\n";
            std::cout << "Don't be upset)))";
        }
    }
    else {
        std::cout << "See you later!";
    }
    return 0;
}