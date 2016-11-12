#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Entity.h"
#include "Level.h"
#include "Enemies.h"
#include "CubitGame.h"

int main()
{
        CubitGame game;
        game.setupDisplay();
        game.runLoop();


        return 0;
}
