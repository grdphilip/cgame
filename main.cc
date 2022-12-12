#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode mode{640, 640};
    sf::RenderWindow window{mode, "SFML"};
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();

    window.display();
    }
}