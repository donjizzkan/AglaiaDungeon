#include "town.hpp"
using namespace std;

void Town::sceneEnter() {
    // 백그라운드 텍스처
    sf::Texture townBgTexture;
    if(!townBgTexture.loadFromFile("../assets/images/town/background.png")) {
        cerr << "background image load failed";
    }

    clog << "Town scene enter";
}

void Town::sceneExit(){

    clog << "Town scene exit";
}