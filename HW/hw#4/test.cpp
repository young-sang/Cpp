#include <iostream>
using namespace std;

#include "inkPrinter.h"
#include "laserPrinter.h"
#include "printer.h"


Printer::Printer(string model, string manufacturer, int availableCount){
    this->model = model;
    this->manufacturer = manufacturer;
    this->availableCount = availableCount;
}

void Printer::print(int pages){
    if(availableCount >= pages){
        cout << "프린트하였습니다." << endl;
    }
    else{
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    }
}

InkPrinter::InkPrinter(string model, string manufacturer, int availableCount, int availableInk): Printer(model, manufacturer, availableCount){
    this->availableInk = availableInk;
    cout << "잉크젯 : " <<model << "," << manufacturer << ", 남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;
}

void InkPrinter::printInkJet(int pages){
    if(pages <= 0){
        cout << model << "," << manufacturer << ", 남은 종이 " 
        << availableCount << "장 ,남은 잉크 " << availableInk << endl;    
        return;
    }
    if(availableCount >= pages){
        availableCount -= pages;
        printedCount += pages;
        availableInk -= pages;
    }
    cout << model << "," << manufacturer << ", 남은 종이 " 
        << availableCount << "장 ,남은 잉크 " << availableInk << endl;    
    
};

LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner): Printer(model, manufacturer, availableCount) {
    this->availableToner = availableToner;
    cout << "잉크젯 : " << model << "," << manufacturer << ", 남은 종이 " 
    << availableCount << "장 ,남은 토너 " << availableToner << endl;
}

void LaserPrinter::printLaser(int pages){
        if(pages <= 0){
            cout << model << "," << manufacturer << ", 남은 종이 " 
            << availableCount << "장 ,남은 토너 " << availableToner << endl;  
            return;
        }
        if(availableCount >= pages){
            availableCount -= pages;
            printedCount += pages;
            availableToner -= 1;
        }
        cout << model << "," << manufacturer << ", 남은 종이 " 
            << availableCount << "장 ,남은 토너 " << availableToner << endl;   
    };