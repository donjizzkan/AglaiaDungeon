#include "application.hpp"
using namespace std;


int App::run(){
        globalSharing.window = &windowRun;       // nullptr인 window에 windowRun참조시킴
        while (windowRun.isOpen()){
            // 여기서 대충 scenemanager 불러오면될듯
        }
        globalSharing.window = nullptr;
        return 0;
}