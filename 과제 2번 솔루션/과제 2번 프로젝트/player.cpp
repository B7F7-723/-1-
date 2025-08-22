#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string nickname)
    : nickname(nickname), job_name("모험가"),
    level(1), HP(50), MP(30),
    power(10), defence(5), accuracy(70), speed(10) {
    cout << "* " << nickname << " 캐릭터가 생성되었습니다." << endl;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
