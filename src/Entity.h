#include <SFML/Graphics.hpp>

#ifndef Entity_h
#define Entity_h

class Entity {
	public:
	Entity(float, float, float); // X, Y, Speed
        Entity();
        void HorizontalMovement(char LorR);
        void VerticalMovement(char UorD);
	void Decel();
	void Move();
	void rotate(float rot);

	

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
