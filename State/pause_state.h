#ifndef PAUSE_STATE_H
#define PAUSE_STATE_H
#include "state.h"
#include <SFML/Graphics.hpp>

class Pause_state : public State
{
public:
    void handle(sf::Event event) override;

    void update(sf::Time delta) override;

    void render(sf::RenderWindow &window) override;
};

#endif