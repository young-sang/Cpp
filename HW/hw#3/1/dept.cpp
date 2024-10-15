#include <iostream>
using namespace std;

#include "dept.h"

Dept::Dept(const Dept& dept){
    this->size = dept.size;
    scores = new int[size];
    for (int i = 0; i < size; i++){
        scores[i] = dept.scores[i];
    }
}

Dept::~Dept(){
    delete[] scores;
}

void Dept::read(){
    cout << "10개의 점수 입력>>";
    for (int i = 0; i < size; i++){
        cin >> scores[i];
    }
    cout << endl;
}

bool Dept::isOver60(int index){
    if (scores[index] <= 60) return false;
    else return true;
}

