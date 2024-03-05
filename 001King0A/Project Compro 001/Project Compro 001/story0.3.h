#define STORY_H

#include <SFML/Graphics.hpp>

class StoryThree {
public:
    StoryThree();
    void run(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
private:
    sf::Texture backgroundTexture3;
    sf::Sprite backgroundImage3;
};