#include "sharing.cpp"

 class Scene{
public:
    // 새로운 씬 불러올 때 호출
    virtual void sceneEnter(){}
    // 기존 씬 내보낼 때 호출
    virtual void sceneExit(){}
 };