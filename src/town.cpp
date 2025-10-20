#include "town.hpp"
using namespace std;

void Town::sceneEnter() {
    // ====================== 배경 이미지 설정 ======================
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

    // scale 계산
    float scaleX = static_cast<float>(windowSize.x) / bgSize.x;
    float scaleY = static_cast<float>(windowSize.y) / bgSize.y; 
    float scale = max(scaleX,scaleY);

    townBackground.setScale(scale,scale);

    // sfml의 floatrect는 left, top, width, height 정보를 가진 구조체...
    // window의 x너비와 background의 width의 차이 * 0.5만큼 offset을 두는 방식으로 가운데 정렬
    sf::FloatRect rect = townBackground.getGlobalBounds();
    float offsetX = (windowSize.x - rect.width) * 0.5f;
    float offsetY = (windowSize.y - rect.height) * 0.5f;
    townBackground.setPosition(offsetX, offsetY);




    
    // ====================== 배경 음악 설정 ======================

    clog << "Town scene enter";
}

void Town::sceneExit(){

    clog << "Town scene exit";
}