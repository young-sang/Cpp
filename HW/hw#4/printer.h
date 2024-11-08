#ifndef Printer_H
#define Printer_H

#include <string>
using namespace std;

class Printer{
protected:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
public:
    Printer(string model, string manufacturer, int availableCount);
    void print(int pages);
};

#endif