#pragma once
#include "player.h"
#include "monster.h"
#include <iostream>
#include <string>
using namespace std;

class Thief : public Player {
public:
    Thief(string nickname);

    void attack() override;
    void attack(Monster* monster) override;
};
