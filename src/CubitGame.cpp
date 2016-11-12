#include "CubitGame.h"

void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(800,600), "My Window");
        window.setFramerateLimit(60);
}

void CubitGame::runLoop()
{
        while(window.pollEvent(event))
        {
                switch(event.type)
                {
                case sf::Event::Closed:
                        window.close();
                        break;
                default:
                        break;
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


