#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    level = 1;
    HP = 60;
    MP = 40;
    power = 18;
    defence = 12;
    accuracy = 90;
    speed = 20;
}

void Thief::attack() {
    cout << "* " << nickname << "��(��) �ܰ��� ���ȴ�!" << endl;
}

void Thief::attack(Monster* monster) {
    cout << "* " << nickname << "��(��) �ܰ����� 5��Ÿ�� ������!" << endl;

    for (int i = 0; i < 5; i++) {
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
