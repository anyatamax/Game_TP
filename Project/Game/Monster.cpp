#include <random>
#include "Monster.h"

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

int RandomNum(int left, int right) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<> dist(left, right);
    return dist(mt);
}