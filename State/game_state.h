#ifndef GAME_STATE_H
#define GAME_STATE_H
#include "state.h"
#include <SFML/Graphics.hpp>

class Game_state : public State
{
public:
    Game_state() = default;

    void handle(sf::Event event) override;

    void update(sf::Time delta) override;

    void render(sf::RenderWindow &window) override;
};

#endif