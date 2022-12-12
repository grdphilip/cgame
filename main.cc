#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode mode{640, 640};
    sf::RenderWindow window{mode, "SFML"};
    sf::Clock clock;

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
}