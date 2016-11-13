#include "Player.h"


Player::Player(float x, float y, float speed, std::string TextureFile)
	: Entity(x, y, speed, TextureFile), PI(3.1459)
{}

void Player::punch() {

}


void Player::lookAtMouse(sf::RenderWindow &window) 
{

        curPos = sprite.getPosition();
		mousePosition = sf::Mouse::getPosition(window);

		dx = curPos.x - mousePosition.x;
		dy = curPos.y - mousePosition.y;

		rotation = std::atan2(dy, dx) * 180 / PI;
		sprite.setRotation(rotation);

}
