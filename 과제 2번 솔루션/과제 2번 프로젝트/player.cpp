#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string nickname)
    : nickname(nickname), job_name("���谡"),
    level(1), HP(50), MP(30),
    power(10), defence(5), accuracy(70), speed(10) {
    cout << "* " << nickname << " ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}
