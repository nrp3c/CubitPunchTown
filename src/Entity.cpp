#include "Entity.h"

using namespace sf;

Entity :: Entity (float x, float y, float s) {
	position.x = x;
	position.y = y;
	speed = s;
}

void Entity::moveDown() {
	position.y -= speed;
}


void Entity::moveUp() {
	position.y += speed;
}

void Entity::moveLeft() {
    position.x -= speed;
}
 
void Entity::moveRight() {
    position.x += speed;
}
/* 
void Entity::update() {
    square.setPosition(position);
}*/
