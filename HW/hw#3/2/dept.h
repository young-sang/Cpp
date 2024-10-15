#ifndef Dept_H
#define Dept_H


class Dept{
    int size;
    int* scores;
public:
    Dept(int size){
        this->size = size;
        scores = new int[size];
    }
    ~Dept();
    void read();
    bool isOver60(int index);
    int countPass();
};

#endif