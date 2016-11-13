#include "Entity.h"


#ifndef Player_h
#define Player_h

using namespace sf;

class Player : public Entity {

	private:
		float PI;
	public:
		Player(float, float, float, std::string);
		void punch();
		void lookAtMouse(RenderWindow);

};
#endif
