#include "CubitGame.h"

CubitGame::Game()
        :score(0)
{}
void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(800,600), "My Window");
        window.setFramerateLimit(60);
}

void CubitGame::runLoop()
n{
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


void CubitGame::getScore()
{
        return score;
}


