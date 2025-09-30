#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main(void){
    RenderWindow window(VideoMode(800,600), "Aglaia Dungeon");
    window.setFramerateLimit(60);

    while(window.isOpen()){
        Event e;
        while(window.pollEvent(e)){
            if(e.type == Event::Closed)
                window.close();
        }
        window.clear(Color(20,20,28));
        window.display();
    }
   
    return 0;
}