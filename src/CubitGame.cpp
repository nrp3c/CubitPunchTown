#include "CubitGame.h"

CubitGame::CubitGame()
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
                        player1.VerticalMovement('W');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                        player1.VerticalMovement('S');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                        player1.HorizontalMovement('A');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                        player1.HorizontalMovement('D');
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                        player1.punch();
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
                        stop();

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


