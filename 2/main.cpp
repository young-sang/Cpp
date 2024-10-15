#include <iostream>
using namespace std;

#include "dept.h"


int main(){
    Dept com(10);
    com.read();
    int n = com.countPass();
    cout << "60점 이상은 " << n << "명";
}