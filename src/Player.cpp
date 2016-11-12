#include "Player.h"

using namespace sf;

Player::Player()
        : PI(3.14359)
{}

void Player::punch() {

}

/*void Player::lookAtMouse(RenderWindow &window) {
        Vector2f curPos = square.getPosition();
		Vextor2i position = Mouse::getPosition(window);

		float dx = curPos.x - position.x;
		float dy = curPos.y - position.y;

		float rotation = (atan2(dy, dx)) * 180 / PI;

		square.setRotation(rotation+180);
        }*/
