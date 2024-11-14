#include "Shape.h"

class GraphicEditor{
    Shape *pStart = NULL;
    Shape *pLast;
public:
    GraphicEditor(){};
    ~GraphicEditor();
    void insertShape(Shape* shape);
    void deleteShape(int index);
    void showAllShapes();
    void start();
    void end();
};

