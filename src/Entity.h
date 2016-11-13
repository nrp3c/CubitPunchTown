#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#ifndef Entity_h
#define Entity_h

using std::endl;
using std::cout;

class Entity {




	public:
        Entity(float, float, float, std::string); // X, Y, Speed
        Entity();
        void HorizontalMovement(char LorR);
        void VerticalMovement(char UorD);
        void Decel();
        void Move();
        void rotate(float rot);
        sf::Sprite sprite;

private:
        sf::Image image;
        sf::Vector2f vel;
        sf::Vector2f pos;
        sf::Vector2f position;
        sf::Texture texture;
        float decel;
        float maxspeed;
        float accel;
        void loadTexture(std::string TextureFileName);
        void setupSprite();
		int health;
		float speed;

                        };
#endif
