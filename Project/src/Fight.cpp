#include "Fight.h"

void Fight(ComposeUnits &units) {
    std::shared_ptr<Monster> monster = Monster::RandomMonsterFactory();
    std::cout << "You have a monster: " << monster->GetName() << std::endl;
    std::cout << "You have to choose a character from:\n";
    units.PrintUnits();
    std::cout << "Please, enter the number: ";
    int number;
    std::cin >> number;
    while (!(number <= units.units.size() && number > 0)) {
        std::cout << "Please, enter the right number again: ";
        std::cin >> number;
    }
    std::shared_ptr<Unit> pearson = units.units[number - 1];
    GameCommand* command;
    while (!pearson->IsDead() && !monster->IdDead()) {
        std::cin.ignore(32767, '\n');
        std::cout << "Do you want Run or Fight? Enter R or F: ";
        char input;
        std::cin >> input;
        if (input == 'R') {
            command = new RunCommand(monster, pearson);
            command->Execute();
        } else if (input == 'F') {
            command = new FightCommand(monster, pearson);
            command->Execute();
        } else {
            continue;
        }
    }
    if (pearson->IsDead()) {
        std::cout << "You were killed by " << monster->GetName() << "\n";
        units.gold_ += pearson->GetGold();
        units.level_ += pearson->GetLevel();
        units.RemoveUnit(pearson);
    }
}