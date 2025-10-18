#include "sharing.hpp"
#include "scene.hpp"
class Town : public Scene{
    void sceneEnter() override{

        cout<< "town 불러옴" << endl;
    }
    void sceneExit() override{

        cout<< "town 내보냄" << endl;
    }
};