#include <SFML/Graphics.hpp>
#include "CubitGame.h"

int main()
{
        CubitGame game;
        game.setupDisplay();
        game.runLoop();

        return 0;
}
