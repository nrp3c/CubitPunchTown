#include "Entity.h"


Entity::Entity() {}

Entity::Entity (float x, float y, float s, std::string TextureFileName) {
	position.x = x;
	position.y = y;
	speed = s;
    loadTexture(TextureFileName);
    setupSprite();
}


void Entity::HorizontalMovement(char AorD)
{

}

void Entity::VerticalMovement(char WorS)
{

}

void Entity::loadTexture(std::string TextureFileName)
{
        if (!texture.loadFromFile(TextureFileName, sf::IntRect(10, 10, 16, 16)))
        {
                std::cout << "Texture not found" << std::endl;// error...
        }
}


void Entity::setupSprite()
{
        sprite.setTexture(texture);
}




// void Entity::rotate(float rot) {

// }

/*
void Entity::update() {
    square.setPosition(position);
}*/
