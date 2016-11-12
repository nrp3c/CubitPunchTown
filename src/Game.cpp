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
{
        Player player1;

        while(window.pollEvent(event))
        {
                sf::Vector2i MousePos = sf::Mouse::getPosition();
                switch(event.type)
                {
                case sf::Event::Closed:
                        window.close();
                        break;
                default:
                        break;
                }

                if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                        player1.moveUp();
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                        player1.moveDown();
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                        player1.moveLeft();
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                        player1.moveRight();
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                        player1.punch();

        }
}

void CubitGame::stop()
{

}


void CubitGame::getScore()
{
        return score;
}


