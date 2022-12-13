#ifndef STATE_H
#define STATE_H
#include <SFML/Graphics.hpp>

class State
{
public:
    virtual void handle(sf::Event event) = 0;
    virtual void update(sf::Time delta) = 0;
    virtual void render(sf::RenderWindow &window) = 0;
};

#endif