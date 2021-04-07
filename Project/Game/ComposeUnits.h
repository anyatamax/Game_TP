#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include "UnitFactory.h"

class ComposeUnits {
public:
    std::vector<std::shared_ptr<Unit>> units;
    int gold_all = 0;
    int level = 0;
    ComposeUnits(const std::string& str);
    void AddUnit(std::shared_ptr<Unit>& person);
    void RemoveUnit(std::shared_ptr<Unit>& person);
    int GetGold() const;
    int GetLevel() const;
    void PrintUnits();
};

ComposeUnits::ComposeUnits(const std::string &str) {
    UnitFactory person;
    std::string number;
    std::stringstream s(str);
    while (s >> number) {
        if (number == "1" || number == "2" || number == "3" || number == "4") {
            units.emplace_back(person.CreateUnit(static_cast<UnitID>(std::stoi(number) - 1)));
            gold_all += units.back().get()->GetGold();
            level += units.back().get()->GetLevel();
        }
    }
}

void ComposeUnits::AddUnit(std::shared_ptr<Unit>& person) {
    units.emplace_back(person);
    gold_all += units.back().get()->GetGold();
    level += units.back().get()->GetLevel();
}

void ComposeUnits::PrintUnits() {
    for (size_t i = 0; i < units.size(); i++) {
        std::cout << units[i]->GetName() << "! Level: " << units[i]->GetLevel() << " Damage: "
                  << units[i]->GetDamage() << " Health: " << units[i]->GetHealth() << " Gold: "
                  << units[i]->GetGold() << std::endl;
    }
}

void ComposeUnits::RemoveUnit(std::shared_ptr<Unit>& person) {
    auto del_unit = std::find(units.begin(), units.end(), person);
    if (del_unit != units.end()) {
        swap(*del_unit, units.back());
        gold_all -= units.back().get()->GetGold();
        units.pop_back();
    }
}

int ComposeUnits::GetGold() const {
    return gold_all;
}
int ComposeUnits::GetLevel() const {
    return level;
}
