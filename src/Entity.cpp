#include "Entity.h"

using namespace sf;

Entity :: Entity() {}

Entity :: Entity (float x, float y, float s) {
	position.x = x;
	position.y = y;
	speed = s;
}


void Entity::HorizontalMovement(char AorD)
{

}

void Entity::VerticalMovement(char WorS)
{

}




// void Entity::rotate(float rot) {

// }

/*
void Entity::update() {
    square.setPosition(position);
}*/
