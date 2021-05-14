#pragma once

#include "Unit.h"
#include "Knight.h"
#include "Human.h"
#include "Magician.h"
#include "Princess.h"
#include "Monster.h"
#include "ComposeUnits.h"

class GameCommand {
public:
    std::shared_ptr<Monster> monster_;
    std::shared_ptr<Unit> pearson_;
    GameCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson);
    virtual void Execute() = 0;
    void AttackPlayer();
    void AttackMonster();
    virtual ~GameCommand() = default;
};

class RunCommand : public GameCommand {
public:
    RunCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson);
    void Execute() override;
};

class FightCommand : public GameCommand {
public:
    FightCommand(std::shared_ptr<Monster>& monster, std::shared_ptr<Unit>& pearson);
    void Execute() override;
};