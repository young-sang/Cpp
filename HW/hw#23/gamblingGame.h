#ifndef GamblingGame_H
#define GamblingGame_H
#include <string>
using namespace std;

class GamblingGame{
    string player1, player2;
    bool result;
public:
    void setPlayer(string player1, string player2);
    void Game();
};

#endif