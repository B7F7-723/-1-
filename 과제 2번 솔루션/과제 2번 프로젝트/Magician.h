#pragma once
#include "player.h"
#include "monster.h"
#include <iostream>
#include <string>
using namespace std;

class Magician : public Player {
public:
    Magician(string nickname);

    void attack() override;
    void attack(Monster* monster) override;
};
