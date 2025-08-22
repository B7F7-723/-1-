#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    level = 1;
    HP = 50;
    MP = 100;
    power = 20;
    defence = 10;
    accuracy = 85;
    speed = 12;
}

void Magician::attack() {
    cout << "* " << nickname << "이(가) 마법을 시전했다!" << endl;
}

void Magician::attack(Monster* monster) {
    cout << "* " << nickname << "이(가) 마법 3연타를 시전했다!" << endl;

    for (int i = 0; i < 3; i++) {
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
