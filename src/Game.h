#include <SFML/Window.hpp>

#ifndef CubitGame_h
#define CubitGame_h


Class CubitGame {

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
