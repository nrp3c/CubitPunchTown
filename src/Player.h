#include "Entity.h"


#ifndef Player_h
#define Player_h

class Player : public Entity {

	public:
		Player(float, float, float, std::string);
		void punch();
		void lookAtMouse(sf::RenderWindow&);
	private:
		float rotation;
		float PI;
		sf::Vector2f curPos;
		sf::Vector2i mousePosition;
		float dx;
		float dy;
		float ration;

};
#endif
