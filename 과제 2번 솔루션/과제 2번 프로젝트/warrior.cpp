#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    level = 1;
    HP = 80;
    MP = 20;
    power = 25;
    defence = 15;
    accuracy = 80;
    speed = 10;
}

void Warrior::attack() {
    cout << "* " << nickname << "��(��) ����� �ֵѷ���!" << endl;
}

void Warrior::attack(Monster* monster) {
    int damage = power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << monster->getName() << "���� "
        << damage << "�� ���ظ� ������!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);

    if (alive) {
        cout << "* " << monster->getName()
            << "�� ���� HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName()
            << "�� ���� HP: 0" << endl;
        cout << "* " << nickname << "�� �¸�!" << endl;
    }
}