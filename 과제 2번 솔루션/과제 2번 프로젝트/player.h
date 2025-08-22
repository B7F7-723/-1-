#pragma once
#include <iostream>
#include <string>
using namespace std;

class Monster;

class Player {
protected:
    string nickname;
    string job_name;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;

public:
    Player(string nickname);
    virtual ~Player() {}

    virtual void attack() = 0;

    virtual void attack(Monster* monster) = 0;

    void printPlayerStatus();

    string getNickname() { return nickname; }
    string getJobName() { return job_name; }
    int getLevel() { return level; }
    int getHP() { return HP; }
    int getMP() { return MP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getAccuracy() { return accuracy; }
    int getSpeed() { return speed; }

    void setNickname(string name) { nickname = name; }
    void setJobName(string job) { job_name = job; }
    void setLevel(int lv) { level = lv; }
    bool setHP(int hp) {
        if (hp > 0) {
            HP = hp;
            return true;
        }
        HP = 0;
        return false;
    }
    void setMP(int mp) { MP = mp; }
    void setPower(int p) { power = p; }
    void setDefence(int d) { defence = d; }
    void setAccuracy(int a) { accuracy = a; }
    void setSpeed(int s) { speed = s; }
};
