#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    level = 1;
    HP = 50;
    MP = 100;
    power = 20;
    defence = 10;
    accuracy = 85;
    speed = 12;
}

void Magician::attack() {
    cout << "* " << nickname << "��(��) ������ �����ߴ�!" << endl;
}

void Magician::attack(Monster* monster) {
    cout << "* " << nickname << "��(��) ���� 3��Ÿ�� �����ߴ�!" << endl;

    for (int i = 0; i < 3; i++) {
        int damage = power - monster->getDefence();
        if (damage <= 0) damage = 1;

        cout << "  >> " << (i + 1) << "Ÿ: " << damage << "�� ����!" << endl;

        bool alive = monster->setHP(monster->getHP() - damage);
        if (!alive) {
            cout << "* " << monster->getName() << "�� HP�� 0�� �Ǿ���!" << endl;
            cout << "* " << nickname << "�� �¸�!" << endl;
            return;
        }
    }

    cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
}
