#define STORY_H

#include <SFML/Graphics.hpp>

class StoryTwo {
public:
    StoryTwo();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture2;
    sf::Sprite backgroundImage2;
};