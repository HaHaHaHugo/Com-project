#define STORY_H

#include <SFML/Graphics.hpp>


class CraditOne {
public:
    CraditOne();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture1;
    sf::Sprite backgroundImage1;
};
