#include "monster.h"
#include "player.h"
#include <iostream>
using namespace std;

Monster::Monster(string name) : name(name), hp(10), power(30), defence(10), speed(10) {}

void Monster::attack(Player* player) {
    int damage = power - player->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << name << "이(가) " << player->getNickname()
        << "에게 " << damage << "의 데미지를 입혔습니다!" << endl;

    bool alive = player->setHP(player->getHP() - damage);
    cout << "* " << player->getNickname() << "의 남은 HP: " << player->getHP() << endl;

    if (!alive) {
        cout << "* " << name << "의 승리!" << endl;
    }
}

// getter / setter 구현
string Monster::getName() { return name; }
int Monster::getHP() { return hp; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

void Monster::setName(string name) { this->name = name; }
bool Monster::setHP(int HP) {
    if (HP > 0) {
        this->hp = HP;
        return true;
    }
    this->hp = 0;
    return false;
}
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }
