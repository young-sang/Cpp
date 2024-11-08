#ifndef InkPrinter_I
#define InkPrinter_H

using namespace std;

#include <string>
#include "printer.h"

class InkPrinter: public Printer{
    int availableInk;
public:
    InkPrinter(string model, string manufacturer, int availableCount, int availableInk);
    void printInkJet(int pages);
};



#endif