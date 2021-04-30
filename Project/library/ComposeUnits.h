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
    int gold_ = 0;
    int level_ = 0;
public:
    std::vector<std::shared_ptr<Unit>> units;
    ComposeUnits(const std::string& str);
    void AddUnit(std::shared_ptr<Unit>& person);
    void RemoveUnit(std::shared_ptr<Unit>& person);
    int GetGold() const;
    void SetGold(int gold);
    void SetLevel(int level);
    int GetLevel() const;
    void PrintUnits();
    bool FinishGame();
};
