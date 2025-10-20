#include "sharing.hpp"
#include "scene.hpp"
class Town : public Scene{
    // town scene 입장
    void sceneEnter() override;

    // town scene 퇴장
    void sceneExit() override;

};