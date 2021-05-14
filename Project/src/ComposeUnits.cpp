#include "ComposeUnits.h"

ComposeUnits::ComposeUnits(const std::string &str) : level_(0), gold_(0) {
    UnitFactory person;
    std::string number;
    std::stringstream s(str);
    while (s >> number) {
        if (number == "1" || number == "2" || number == "3" || number == "4") {
            units.emplace_back(person.CreateUnit(static_cast<UnitID>(std::stoi(number) - 1)));
        }
    }
}

void ComposeUnits::AddUnit(std::shared_ptr<Unit>& person) {
    units.emplace_back(person);
}

void ComposeUnits::PrintUnits() {
    for (size_t i = 0; i < units.size(); i++) {
        std::cout << (i + 1) << ". " << units[i]->GetName() << "! Level: " << units[i]->GetLevel() << " Damage: "
                  << units[i]->GetDamage() << " Health: " << units[i]->GetHealth() << " Gold: "
                  << units[i]->GetGold() << std::endl;
    }
}

void ComposeUnits::RemoveUnit(std::shared_ptr<Unit>& person) {
    auto del_unit = std::find(units.begin(), units.end(), person);
    if (del_unit != units.end()) {
        swap(*del_unit, units.back());
        units.pop_back();
    }
}

int ComposeUnits::GetGold() const {
    size_t gold = 0;
    for (size_t i = 0; i < units.size(); ++i) {
        gold += units[i]->GetGold();
    }
    return  gold + gold_;
}

void ComposeUnits::SetGold(int gold) {
    gold_ += gold;
}

void ComposeUnits::SetLevel(int level) {
    level_ += level;
}

int ComposeUnits::GetLevel() const {
    size_t level = 0;
    for (size_t i = 0; i < units.size(); ++i) {
        level += units[i]->GetLevel();
    }
    return  level + level_;
}

bool ComposeUnits::FinishGame() {
    return (units.empty() || GetLevel() == 20);
}