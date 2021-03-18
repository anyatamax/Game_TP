#pragma once
#include <random>

int RandomNum(int left, int right) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<> dist(left, right);
    return dist(mt);
}

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
    static Monster* RandomMonsterFactory();

};

Monster::Monster(MonsterID id)
        : name_(monster_type[id].name)
        , health_(monster_type[id].health)
        , damage_(monster_type[id].damage)
        , gold_(monster_type[id].gold)
        , monster_(id) {
}

const char* Monster::GetName() {
    return name_;
}
int Monster::GetDamage() const {
    return damage_;
}
int Monster::GetHealth() const {
    return health_;
}
int Monster::GetGold() const {
    return gold_;
}

Monster* Monster::RandomMonsterFactory() {
    int id = RandomNum(0, SIZE);
    return new Monster(static_cast<MonsterID>(id));
}

Monster::MonsterType Monster::monster_type[Monster::SIZE] {
        {"Dragon", 10, 10, 10},
        {"Godzilla", 20, 20, 20},
        {"Vampire", 5, 5, 5},
        {"Goblin", 5, 10, 5},
        {"Zombie", 15, 5, 15},
        {"Bigfoot", 30, 25, 30}
};

