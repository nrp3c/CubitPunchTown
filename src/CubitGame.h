#include <SFML/Window.hpp>

#ifndef Game_h
#define Game_h


Class Game {

public:
        game();
        void setupDisplay();
        void runLoop();
        void stop();


private:
        void getScore();
        sf::Window window;
        int score;

}
#endif
