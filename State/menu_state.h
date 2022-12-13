#ifndef MENU_STATE_H
#define MENU_STATE_H
#include "state.h"
#include <SFML/Graphics.hpp>

class Menu_state : public State
{
public:
    void handle(sf::Event event) override;

    void update(sf::Time delta) override;

    void render(sf::RenderWindow &window) override;
};

#endif