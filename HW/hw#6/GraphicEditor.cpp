#include <iostream>
#include <vector>
using namespace std;

#include "GraphicEditor.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "UI.h"



GraphicEditor::~GraphicEditor(){
    for(it=v.begin(); it != v.end(); it++){
        v.erase(it);
    };
};

void GraphicEditor::insertShape(Shape* shape){
    v.push_back(shape);
};

void GraphicEditor::deleteShape(int index){
    it = v.begin();
    while(true){
        if(*it == v.at(index-1)){
          v.erase(it);
          break;
        } 
        it++;
    };
};

void GraphicEditor::showAllShapes(){
    int num = 1;
    for(it=v.begin(); it != v.end(); it++){
        Shape *shape = *it;
        cout << num << ": ";
        shape->paint();
        num++;
    };
};

void GraphicEditor::start(){
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