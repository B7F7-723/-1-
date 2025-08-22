#pragma once
#include "player.h"
#include "monster.h"
#include <iostream>
#include <string>
using namespace std;

class Warrior : public Player {
public:
    Warrior(string nickname);

    void attack() override;
    void attack(Monster* monster) override;
};