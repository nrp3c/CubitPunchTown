#include <SFML/Graphics.hpp>

class Level {

public:
        void generateLevel();
        void clearLevel();

private:
        sf::Sprite building1;
        sf::Sprite building2;
        sf::Sprite grassTile;
        sf::Sprite streetTile;
        sf::Sprite sidewalkTile;

};
