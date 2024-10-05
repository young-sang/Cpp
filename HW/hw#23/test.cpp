#include <iostream>
using namespace std;

#include "gamblingGame.h"
#include "player.h"


void GamblingGame::setPlayer(string player1, string player2){
    this -> player1 = player1;
    this -> player2 = player2;
}



void GamblingGame::Game(){
    Player *player[2];
    player[0] = new Player(player1);
    player[1] = new Player(player2);

    int num = 0;
    
    while(!result){
        cout << player[num]-> getPlayername() << "<Enter>" << endl;
        cin.get();
        player[num]->setRandNum();
        player[num]->setResult();
        player[num]->outResult();
        result = player[num]->getResult();

        num = (num + 1) % 2;
    }
    
    
    delete player[0];
    delete player[1];
}


string Player::getPlayername(){
    return playerName;
}

void Player::setRandNum(){
    this -> num1 = rand() % 3;
    this -> num2 = rand() % 3;
    this -> num3 = rand() % 3;
}

void Player::setResult(){
    if (num1 == num2 && num2 == num3 && num1 == num3){
        this -> result = true;
    }else{
        this -> result = false;
    }
}

bool Player::getResult(){
    return result;
}

void Player::outResult(){
    if (!result)
        cout << num1 << num2 << num3 << "   아쉽군요!\n\n";
    else{
        cout << num1 << num2 << num3 << playerName << "님 승리!\n\n";
    }
}