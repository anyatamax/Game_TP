#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <sstream>
#include "UnitFactory.h"

class ComposeUnits {
private:
    int gold_all = 0;
    int level = 0;
public:
    std::vector<std::shared_ptr<Unit>> units;
    ComposeUnits(const std::string& str);
    void AddUnit(std::shared_ptr<Unit>& person);
    void RemoveUnit(std::shared_ptr<Unit>& person);
    int GetGold() const;
    int GetLevel() const;
    void PrintUnits();
};
