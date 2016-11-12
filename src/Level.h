#include <SFML/Graphics.hpp>

class Level {

public:
        generateLevel();
        clearLevel();

private:
        sf::Sprite building1;
        sf::Sprite building2;
        sf::Sprite grassTile;
        sf::Sprite streetTile;
        sf::Sprite sidewalkTile;

};
