#include "Entity.h"


#ifndef Player_h
#define Player_h

using namespace sf;

class Player : public Entity {

	private:
		float PI;
        sf::Sprite playerSprite;
        sf::Texture texture;
        void loadTexture();
        void setupSprite();
	public:
		Player();
		void punch();
		void lookAtMouse(RenderWindow);

};
#endif
