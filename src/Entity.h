#include <SFML/Graphics.hpp>

#ifndef Entity_h
#define Entity_h

using namespace sf;

class Entity.h {
	private:
		Vector2f position;
		Entity(float, float, float); // X, Y, Speed
		int health;
		float speed;
		RectangleShape square (const Vector2f &size=Vector2f(1, 1));
	
	public:
		void moveUp();
		void moveDown();
		void moveLeft();
		void moveRight();
		void updat();
};
#endif
