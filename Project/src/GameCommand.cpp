#include "GameCommand.h"

GameCommand::GameCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson) : monster_(monster), pearson_(pearson) {
}

void GameCommand::AttackPlayer() {
    if (monster_->IdDead()) {
        return;
    }
    pearson_->ReduceHealth(monster_->GetDamage());
    std::cout << "You were injured by " << monster_->GetName() << " and lost " << monster_->GetDamage() << " health(((" << std::endl;
}
void GameCommand::AttackMonster() {
    if (pearson_->IsDead()) {
        return;
    }
    std::cout << "You attack a " << monster_->GetName() << " with a power: " << pearson_->GetDamage() << std::endl;
    monster_->ReduceHealth(pearson_->GetDamage());
    if (monster_->IdDead()) {
        std::cout << "You killed a " << monster_->GetName() << std::endl;
        pearson_->LevelUp();
        std::cout << "Now your level is " << pearson_->GetLevel() << " and damage of " << pearson_->GetName() << " is " << pearson_->GetDamage() << std::endl;
        pearson_->AddGold(monster_->GetGold());
        std::cout << "Also you took " << monster_->GetGold() << " gold\n";
    }
}

RunCommand::RunCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson) : GameCommand(monster, pearson) {
}

void RunCommand::Execute() {
    const char* lucky_man = "Human";
    if (RandomNum(1, 3) == 1 || pearson_->GetName() == lucky_man) {
        std::cin.ignore(32767, '\n');
        std::cout << "You successfully fled!\n";
        monster_->ReduceHealth(monster_->GetHealth());
    } else {
        std::cin.ignore(32767, '\n');
        std::cout << "You failed the flee(((\n";
        AttackPlayer();
    }
}

FightCommand::FightCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson) : GameCommand(monster, pearson) {
}

void FightCommand::Execute() {
    AttackMonster();
    AttackPlayer();
}