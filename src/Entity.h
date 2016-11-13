#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

#ifndef Entity_h
#define Entity_h



class Entity {
	public:
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


//		void update();
};
#endif
