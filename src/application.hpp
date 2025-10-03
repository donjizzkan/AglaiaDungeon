// =====================================================
// RenderWindow 생성, 전체적인 인터페이스 및 설정 데이터 관리
// =====================================================
#include "SFML/Graphics.hpp"
#include "sharing.hpp"
#include <iostream>
using namespace std;


class App{
public:
    int run(void){
        Sharing sharing;
        sf::RenderWindow window(sf::VideoMode(1280,720), "Aglaia Dungeon");
        sharing.window = &window;       // Sharing의 window 지정

        return 0;
    }

};