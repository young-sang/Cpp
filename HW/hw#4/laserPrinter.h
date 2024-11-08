#ifndef LaserPrinter_H
#define LaserPrinter_H

using namespace std;

#include <string>
#include "printer.h"

class LaserPrinter: public Printer{
    int availableToner;
public:
    LaserPrinter(string model, string manufacturer, int availableCount, int availableToner);
    void printLaser(int pages);
};


#endif