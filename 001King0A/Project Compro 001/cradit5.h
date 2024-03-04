#define STORY_H

#include <SFML/Graphics.hpp>


class CraditFive {
public:
    CraditFive();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture5;
    sf::Sprite backgroundImage5;
};
