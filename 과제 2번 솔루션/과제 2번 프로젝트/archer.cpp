#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    level = 1;
    HP = 70;
    MP = 30;
    power = 22;
    defence = 13;
    accuracy = 95;
    speed = 18;
}

void Archer::attack() {
    cout << "* " << nickname << "이(가) 활을 쏘았다!" << endl;
}

void Archer::attack(Monster* monster) {
    cout << "* " << nickname << "이(가) 정확한 조준으로 활을 쏜다!" << endl;

    int damage = power * 2 - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "  >> 치명타 공격: " << damage << "의 피해!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);
    if (!alive) {
        cout << "* " << monster->getName() << "의 HP가 0이 되었다!" << endl;
        cout << "* " << nickname << "의 승리!" << endl;
    }
    else {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    }
}
