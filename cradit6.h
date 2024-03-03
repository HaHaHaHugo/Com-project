#define STORY_H

#include <SFML/Graphics.hpp>


class CraditSix {
public:
    CraditSix();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture6;
    sf::Sprite backgroundImage6;
};
