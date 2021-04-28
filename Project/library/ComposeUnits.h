#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <sstream>
#include "UnitFactory.h"

class ComposeUnits {
public:
    std::vector<std::shared_ptr<Unit>> units;
    int level_;
    int gold_;
    ComposeUnits(const std::string& str);
    void AddUnit(std::shared_ptr<Unit>& person);
    void RemoveUnit(std::shared_ptr<Unit>& person);
    int GetGold() const;
    int GetLevel() const;
    void PrintUnits();
    bool FinishGame();
};
