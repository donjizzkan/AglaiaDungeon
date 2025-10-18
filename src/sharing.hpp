// ================================================================
// 모든 파일에서 공용으로 사용할 요소(window, 사운드 출력 등)의 포인터 저장
// ================================================================
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

// 빌드 및 컴파일 시간 단축 위해 namespace로 대체
namespace sf {class RenderWindow;}

struct Sharing{
    sf::RenderWindow* window = nullptr;         // App 클래스에서 선언
};

// Sharing 전역변수로 선언
extern Sharing globalSharing;