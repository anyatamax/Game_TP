#pragma once

class Unit {
protected:
    const char* name_;
    int health_;
    int damage_;
    int gold_;
    int level_;
public:
    Unit(const char* name, int health, int damage, int gold, int level);
    const char* GetName() {
        return name_;
    }
    int GetDamage() const {
        return damage_;
    }
    int GetHealth() const {
        return health_;
    }
    int GetGold() const {
        return gold_;
    }
<<<<<<< HEAD

=======
>>>>>>> edits_checkpoint_1
    int GetLevel() const {
        return level_;
    }
    virtual const char* GetPrivilege() = 0;
    virtual ~Unit() = default;
};

Unit::Unit(const char* name, int health, int damage, int gold, int level)
        : name_(name)
        , health_(health)
        , damage_(damage)
        , gold_(gold)
        , level_(level) {
}
