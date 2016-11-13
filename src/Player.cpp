#include "Player.h"

using namespace sf;

Player::Player(float x, float y, float speed, std::string TextureFile)
        : PI(3.14159265358979323846264338327950288419716939937510582)//, Entity(float x, float y, float speed, std::string TextureFile)
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
