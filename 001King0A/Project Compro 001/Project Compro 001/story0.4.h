#define STORY_H

#include <SFML/Graphics.hpp>

class StoryFour {
public:
    StoryFour();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture4;
    sf::Sprite backgroundImage4;
};