#define MAINGAME_H

#include <SFML/Graphics.hpp>

class MainGame {
public:
    MainGame();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture;
    sf::Sprite backgroundImage;
    // Add any necessary game objects, variables, and functions here
};

