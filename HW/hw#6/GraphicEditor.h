#include "Shape.h"
#include <vector>
using namespace std;

class GraphicEditor{
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor(){};
    ~GraphicEditor();
    void insertShape(Shape* shape);
    void deleteShape(int index);
    void showAllShapes();
    void start();
};

