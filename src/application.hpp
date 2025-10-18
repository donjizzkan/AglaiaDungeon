// =====================================================
// RenderWindow 생성, 전체적인 인터페이스 및 설정 데이터 관리
// =====================================================

#include "sharing.hpp"
#include <iostream>


class App{
public:
    // window 창 실행 후 작동 내용
    int run(void);

    // sharing의 nullptr인 window가 참조할 windowRun
    sf::RenderWindow windowRun{sf::VideoMode(1280,720), "Aglaia Dungeon"};
};