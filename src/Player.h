#include "Entity.h"

#ifndef Player_h
#define Player_h

using namespace sf;

class Player : public Entity {
	private:
		float const PI = 3.14159
	
	public:
		player();
		void punch();
		void lookAtMouse(RenderWindow);
};
#endif
