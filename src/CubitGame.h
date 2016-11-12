#include <SFML/Window.hpp>

#ifndef CubitGame_h
#define CubitGame_h


class CubitGame {

public:
        void setupDisplay();
        void runLoop();
        void stop();

private:
        int getScore();
        sf::Window window;
        sf::Event event;
        int score;

};
#endif
