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
    virtual const char* GetName() = 0;
    virtual int GetDamage() = 0;
    virtual int GetHealth() = 0;
    virtual int GetGold() = 0;
    virtual const char* GetPrivilege() = 0;
    virtual int GetLevel() = 0;
    virtual ~Unit() = default;
};