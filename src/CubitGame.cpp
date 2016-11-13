#include "CubitGame.h"

CubitGame::CubitGame()
        :score(0)
{}

void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(800,600), "Penis Butt");
        window.setFramerateLimit(60);
}


void CubitGame::runLoop()
{

        Entity player(5, 5, 1.0, "player.png");
        while(window.isOpen())
        {
                window.draw(player.sprite);

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

                }

                if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                        player.VerticalMovement('W');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                        player.VerticalMovement('S');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                        player.HorizontalMovement('A');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                        player.HorizontalMovement('D');
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
                        stop();
                player.Move();

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
