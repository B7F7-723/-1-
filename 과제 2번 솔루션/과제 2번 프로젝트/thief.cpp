#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    level = 1;
    HP = 60;
    MP = 40;
    power = 18;
    defence = 12;
    accuracy = 90;
    speed = 20;
}

void Thief::attack() {
    cout << "* " << nickname << "이(가) 단검을 날렸다!" << endl;
}

void Thief::attack(Monster* monster) {
    cout << "* " << nickname << "이(가) 단검으로 5연타를 날린다!" << endl;

    for (int i = 0; i < 5; i++) {
        int damage = power - monster->getDefence();
        if (damage <= 0) damage = 1;

        cout << "  >> " << (i + 1) << "타: " << damage << "의 피해!" << endl;

        bool alive = monster->setHP(monster->getHP() - damage);
        if (!alive) {
            cout << "* " << monster->getName() << "의 HP가 0이 되었다!" << endl;
            cout << "* " << nickname << "의 승리!" << endl;
            return;
        }
    }

    cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
}
