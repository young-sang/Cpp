#include <iostream>
using namespace std;

#include "gamblingGame.h"

int main(){
    string player1, player2;
    GamblingGame gamblingGame;

    cout << "***** 겜블링 게임을 시작합니다. *****\n";
    cout << "첫번째 선수 이름>>";
    cin >> player1;
    cout << "두번째 선수 이름>>";
    cin >> player2;

    gamblingGame.setPlayer(player1, player2);
    gamblingGame.Game();
}