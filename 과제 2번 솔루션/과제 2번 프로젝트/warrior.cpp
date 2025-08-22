#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    level = 1;
    HP = 80;
    MP = 20;
    power = 25;
    defence = 15;
    accuracy = 80;
    speed = 10;
}

void Warrior::attack() {
    cout << "* " << nickname << "이(가) 장검을 휘둘렀다!" << endl;
}

void Warrior::attack(Monster* monster) {
    int damage = power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << monster->getName() << "에게 "
        << damage << "의 피해를 입혔다!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);

    if (alive) {
        cout << "* " << monster->getName()
            << "의 남은 HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName()
            << "의 남은 HP: 0" << endl;
        cout << "* " << nickname << "의 승리!" << endl;
    }
}