#include "CubitGame.h"

void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(800,600), "My Window");
        window.setFramerateLimit(60);
}

void CubitGame::runLoop()
{
        while (window.isOpen())
        {
                // check all the window's events that were triggered since the last iteration of the loop
                while (window.pollEvent(event))
                {
                        // "close requested" event: we close the window
                        if (event.type == sf::Event::Closed)
                                window.close();
                }
        }
}

void CubitGame::stop()
{

}


int CubitGame::getScore()
{
        return score;
}


