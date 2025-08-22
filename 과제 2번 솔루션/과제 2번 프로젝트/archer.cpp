#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    level = 1;
    HP = 70;
    MP = 30;
    power = 22;
    defence = 13;
    accuracy = 95;
    speed = 18;
}

void Archer::attack() {
    cout << "* " << nickname << "��(��) Ȱ�� ��Ҵ�!" << endl;
}

void Archer::attack(Monster* monster) {
    cout << "* " << nickname << "��(��) ��Ȯ�� �������� Ȱ�� ���!" << endl;

    int damage = power * 2 - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "  >> ġ��Ÿ ����: " << damage << "�� ����!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);
    if (!alive) {
        cout << "* " << monster->getName() << "�� HP�� 0�� �Ǿ���!" << endl;
        cout << "* " << nickname << "�� �¸�!" << endl;
    }
    else {
        cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
    }
}
