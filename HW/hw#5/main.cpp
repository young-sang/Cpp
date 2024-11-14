#include <iostream>
#include "UI.h"
#include "GraphicEditor.h"


int UI::modeNum = 0;
int UI::insertNum = 0;
int UI::delNum = 0;

int main()
{
    GraphicEditor editor;
    editor.start();
}