#pragma once
#include <string>
#include <iostream>
class Player; // 전방선언

class Monster {
public:
    Monster(std::string name);

    void attack(Player* player);

    // getter
    std::string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    // setter
    void setName(std::string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

private:
    std::string name;
    int hp;
    int power;
    int defence;
    int speed;
};
