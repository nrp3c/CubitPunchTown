#include <SFML/Window.hpp>
#include "Entity.h"
#include "Player.h"
#include "Enemies.h"
#include "Level.h"

#ifndef CubitGame_h
#define CubitGame_h


class CubitGame {

public:
        void setupDisplay();
        void runLoop();
        void stop();

private:
        void setupInput();
        int getScore();
        sf::RenderWindow window;
        sf::Event event;
        int score;

};
#endif
