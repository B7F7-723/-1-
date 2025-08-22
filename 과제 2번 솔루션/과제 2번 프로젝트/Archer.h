#pragma once
#include "player.h"
#include "monster.h"
#include <iostream>
#include <string>
using namespace std;

class Archer : public Player {
public:
    Archer(string nickname);

    void attack() override;
    void attack(Monster* monster) override;
};
