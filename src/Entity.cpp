#include "Entity.h"

using namespace sf;

Entity :: Entity()
	: maxspeed(4.0f)
	, accel(1.5f)
	, decel(0.1f)
{}

Entity :: Entity (float x, float y, float s) {
	pos.x = x;
	pos.y = y;
	speed = s;
}


void Entity::HorizontalMovement(char AorD){
	if(AorD == 'a')
		vel.x -= accel;
	else if(AorD == 'd')
		vel.x += accel;
}

void Entity::VerticalMovement(char WorS){
	if(WorS == 'w')
		vel.y -= accel;
	if(WorS == 's')
		vel.x += accel;
}
void Entity::Decel() {
	vel.x *= decel;
	vel.y *= decel;
}
void Entity::Move(){
	pos += vel;
	if(vel.x < -maxspeed)
		vel.x = -maxspeed;
        if(vel.x >  maxspeed)
		vel.x =  maxspeed;
        if(vel.y < -maxspeed)
		vel.y = -maxspeed;
        if(vel.y >  maxspeed)
		vel.y =  maxspeed;
//	entity.setPosition;
}
