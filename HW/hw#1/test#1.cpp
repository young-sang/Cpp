#include <iostream>
using namespace std;

class Add{
    int a;
    int b;
    public:
        void setValue(int x, int y);
        int calculate();
};

void Add::setValue(int x, int y){
    a = x;
    b = y;
}

int Add::calculate(){
    return a + b;
}

class Sub{
    int a;
    int b;
    public:
        void setValue(int x, int y);
        int calculate();
};

void Sub::setValue(int x, int y){
    a = x;
    b = y;
}

int Sub::calculate(){
    return a - b;
}

class Mul{
    int a;
    int b;
    public:
        void setValue(int x, int y);
        int calculate();
};

void Mul::setValue(int x, int y){
    a = x;
    b = y;
}

int Mul::calculate(){
    return a * b;
}

class Div{
    int a;
    int b;
    public:
        void setValue(int x, int y);
        int calculate();
};

void Div::setValue(int x, int y){
    a = x;
    b = y;
}

int Div::calculate(){
    return a / b;
}

int main(){
    Add a;
    Sub s;
    Mul m;
    Div d;

    int num1, num2;
    string cal;
        

    while(true){
        cout << "두 정수와 연산자를 입력하세요>>";
        cin>> num1 >> num2 >> cal;
        
        if (cal == "+"){
            a.setValue(num1, num2);
            cout << a.calculate() << "\n";
        }
        else if(cal == "-"){
            s.setValue(num1, num2);
            cout << s.calculate() << "\n";
        }
        else if(cal == "*"){
            m.setValue(num1, num2);
            cout << m.calculate() << "\n";
        }
        else if(cal == "/"){
            d.setValue(num1, num2);
            cout << d.calculate() << "\n";
        }
    }
    
}