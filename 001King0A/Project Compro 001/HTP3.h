#define STORY_H

#include <SFML/Graphics.hpp>


class HowThree {
public:
    HowThree();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture3;
    sf::Sprite backgroundImage3;
};
