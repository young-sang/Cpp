#include <iostream>
#include "UI.h"
#include "GraphicEditor.h"
using namespace std;




void UI::editerStartUI(){
    cout << "그래픽 에디터입니다." << endl;
};

void UI::modeSelect(){
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
    cin >> modeNum;
};

void UI::insertModeUI(){
    cout << "선:1, 원:2, 사각형:3 >>";
    cin >> insertNum;
};

void UI::deleteModeUI(){
    cout << "삭제하고자 하는 도형의 인덱스 >>";
    cin >> delNum;
};