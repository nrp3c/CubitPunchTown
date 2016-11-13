#include "CubitGame.h"

CubitGame::CubitGame()
        :score(0)
{}

void CubitGame::setupDisplay()
{
        window.create(sf::VideoMode(320,240), "Penis Butt");
        window.setFramerateLimit(60);
}


void CubitGame::runLoop()
{

        Player player(5, 5, 5.0, "assets/player.png");
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
		// Decelerate every run, clear every old sprite, move based off every key
		// rotate based off current mouse position, then redraw the sprite
		player.Decel();
		window.clear();	
                player.Move();
		player.lookAtMouse(window);
		window.draw(player.sprite);

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
