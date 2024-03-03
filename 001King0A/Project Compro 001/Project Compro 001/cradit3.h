#define STORY_H

#include <SFML/Graphics.hpp>


class CraditThree {
public:
    CraditThree();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture3;
    sf::Sprite backgroundImage3;
};
