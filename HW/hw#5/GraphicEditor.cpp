#include <iostream>
using namespace std;

#include "GraphicEditor.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "UI.h"



GraphicEditor::~GraphicEditor(){
    Shape* p = pStart;
    while(p != NULL){
        Shape* q = p->getNext();
        delete p;
        p = q;
    }
}

void GraphicEditor::insertShape(Shape* shape){
    pLast = pLast->add(shape);
};

void GraphicEditor::deleteShape(int index){
    Shape* p = pStart;
    Shape* prev = p;
    int currentIndex = 0;
    while(p != NULL){
        if(currentIndex+1 == index){
            if(p == pStart){
                pStart = p->getNext();
            }else{
                prev->setNext(p->getNext());
            }
            if(p == pLast){
                pLast = prev;
            }
            delete p;
            break;
        }else{
            prev = p;
            p = p->getNext();
            currentIndex++;
        }    
    }
};

void GraphicEditor::showAllShapes(){
    Shape* p = pStart;
    int prevNum = 1;
    while(p != NULL){
        cout << prevNum << ": ";
        prevNum++;
        p -> paint();
        p = p->getNext();
    }
};

void GraphicEditor::start(){
    
    pStart = new Circle();
    pLast = pStart;
    
    pLast = pLast->add(new Rect());
    pLast = pLast->add(new Circle());
    pLast = pLast->add(new Line());
    pLast = pLast->add(new Rect());
    
    UI ui;
    ui.editerStartUI();
    while(true){
        ui.modeSelect();
        if(UI::modeNum == 1){
            ui.insertModeUI();
            if(UI::insertNum == 1){
                insertShape(new Line());
            }else if(UI::insertNum == 2){
                insertShape(new Circle());
            }else if(UI::insertNum == 3){
                insertShape(new Rect());
            }
            
        }
        else if(UI::modeNum == 2){
            ui.deleteModeUI();
            deleteShape(UI::delNum);
        }
        else if(UI::modeNum == 3){
            showAllShapes();
        }else{
            break;
        }    
    }
    
    

};