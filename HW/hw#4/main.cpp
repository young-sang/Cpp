#include <iostream>
using namespace std;

#include <string>

#include "inkPrinter.h"
#include "laserPrinter.h"



int main()
{
    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
    InkPrinter inkPrinter = InkPrinter("officeJet V40", "HP", 5, 10);
    LaserPrinter laserPrinter = LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
    
    int mode, pages;
    string repeat;
    
    while (true){
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> mode >> pages;
        if(pages > 0){
            if(mode == 1){
                inkPrinter.print(pages);
                inkPrinter.printInkJet(pages);
                laserPrinter.printLaser(0);
            }
            else if(mode == 2){
                laserPrinter.print(pages);
                inkPrinter.printInkJet(0);
                laserPrinter.printLaser(pages);
            }
        }else{
            cout << "페이지를 0 이상 입력해 주세요." << endl;
        }
        
        while (true){
            
            cout << "계속 프린트 하시겠습니까(y/n)>>";
            cin >> repeat;
            cout << endl;
            
            if (repeat == "y" || repeat == "n")
                break;
            else
                cout << "y 또는 n를 입력해주세요" << endl;
        }
        
        if(repeat == "n"){
            break;
        }
    }
    
}