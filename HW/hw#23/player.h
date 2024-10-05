#ifndef Player_H
#define Player_H
#include <string>
using namespace std;

class Player{
    string playerName;
    int num1, num2, num3;
    bool result;
public:
    Player(string player) {playerName = player;}
    string getPlayername();
    void setRandNum();
    void setResult();
    bool getResult();
    void outResult();
};

#endif