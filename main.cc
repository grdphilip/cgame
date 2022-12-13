#include <iostream>
#include "State/menu_state.h"
#include "State/game_state.h"
#include "State/pause_state.h"
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode mode{640, 640};
    sf::RenderWindow window{mode, "SFML"};
    sf::Clock clock;
    State *state = new Game_state();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        sf::RectangleShape shape(sf::Vector2f(640.f, 640.f));

        shape.setFillColor(sf::Color(100, 250, 50));

        window.clear();

        window.draw(shape);

        window.display();
    }
    delete state;
}