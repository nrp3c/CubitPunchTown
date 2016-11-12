#include <SFML/Graphics.hpp>


#ifndef Entity_h
#define Entity_h



class Entity {
	public:
		Entity(float, float, float); // X, Y, Speed
        Entity();
		void moveUp();
		void moveDown();
		void moveLeft();
		void moveRight();
//		void rotate(float rot);

	private:
        sf::Vector2f position;
//sf::Vector2f position;
		int health;
		float speed;
//		RectangleShape square (const Vector2f &size=Vector2f(1, 1));


//		void update();
};
#endif
