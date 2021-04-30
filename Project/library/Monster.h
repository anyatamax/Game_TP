#pragma once
#include <random>
#include <memory>

int RandomNum(int left, int right);

class Monster {
private:
    const char* name_;
    int health_;
    int damage_;
    int gold_;
    enum MonsterID {
        DRAGON,
        GODZILLA,
        VAMPIRE,
        GOBLIN,
        ZOMBIE,
        BIGFOOT,
        SIZE
    };
    MonsterID monster_;
    struct MonsterType {
        const char* name;
        int health;
        int damage;
        int gold;
    };
    static MonsterType monster_type[SIZE];

public:
    explicit Monster(MonsterID id);
    const char* GetName();
    int GetDamage() const;
    int GetHealth() const;
    int GetGold() const;
    static std::unique_ptr<Monster> RandomMonsterFactory();

};

