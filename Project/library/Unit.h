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
    const char* GetName();
    int GetDamage() const;
    int GetHealth() const;
    int GetGold() const;
    int GetLevel() const;
    virtual const char* GetPrivilege() = 0;
    virtual ~Unit() = default;
};
