#include "town.hpp"
using namespace std;

void Town::sceneEnter() {
    // 백그라운드 텍스처
    sf::Texture townBgTexture;
    if(!townBgTexture.loadFromFile("../assets/images/town/background.png")) {
        cerr << "background image load failed";
        return;
    }

    // 계단 현상 생기면 아래 주석 제거
    // townBgTexture.setSmooth(true);

    // 백그라운드 텍스처 -> 스프라이트
    sf::Sprite townBackground(townBgTexture);
    
    // window getsize
    sf::Vector2u windowSize = globalSharing.window->getSize();
    sf::Vector2u bgSize = townBgTexture.getSize();

    clog << "Town scene enter";
}

void Town::sceneExit(){

    clog << "Town scene exit";
}