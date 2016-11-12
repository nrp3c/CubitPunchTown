#include "CubitGame.h"
#include <SFML/OpenGL.hpp>

void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(800,600), "OpenGL", sf::Style::Default);
        window.setFramerateLimit(60);

}

void CubitGame::setupInput()
{

}

void CubitGame::runLoop()
{
        Player player1;
        while (window.isOpen())
        {
                // check all the window's events that were triggered since the last iteration of the loop
                while (window.pollEvent(event))
                {

                        // "close requested" event: we close the window
                        if (event.type == sf::Event::Closed)
                                window.close();

                }

                window.display();

        }
}

void CubitGame::stop()
{

}


int CubitGame::getScore()
{
        return score;
}


