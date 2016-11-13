#include <SFML/Graphics.hpp>
<<<<<<< HEAD
=======
#include <string>
#include <iostream>
>>>>>>> a587c5e35f78f0a2bafefe57176a12087dc72d0b

#ifndef Entity_h
#define Entity_h

class Entity {
	public:
<<<<<<< HEAD
	Entity(float, float, float); // X, Y, Speed
        Entity();
        void HorizontalMovement(char LorR);
        void VerticalMovement(char UorD);
	void Decel();
	void Move();
	void rotate(float rot);
=======
		Entity(float, float, float, std::string); // X, Y, Speed, string filename
        Entity();
        void HorizontalMovement(char LorR);
        void VerticalMovement(char UorD);
		void rotate(float rot);
        sf::Sprite sprite;
	private:

        sf::Texture texture;
        void loadTexture(std::string TextureFileName);
        void setupSprite();
        sf::Vector2f position;
//sf::Vector2f position;
		int health;
		float speed;
//		RectangleShape square (const Vector2f &size=Vector2f(1, 1));
>>>>>>> a587c5e35f78f0a2bafefe57176a12087dc72d0b

	

	private:
	// Velosity par
        sf::Vector2f pos;
	sf::Vector2f vel;
	float maxspeed, accel, decel;

	int health;
	float speed;
	sf::Sprite entity();
};
#endif
