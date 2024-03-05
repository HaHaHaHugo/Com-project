#define HOME_H

#include <SFML/Graphics.hpp>

class Home {
public:
    Home();
    void draw(sf::RenderWindow& window);
    bool isStartButtonClicked(sf::Vector2i mousePosition);
    bool isExitButtonClicked(sf::Vector2i mousePosition); // New function declaration
    bool isCreditButtonClicked(sf::Vector2i mousePosition);
    bool isHowToPlayButtonClicked(sf::Vector2i mousePosition);
private:
    sf::Texture backgroundTexture;
    sf::Sprite backgroundImage;
    sf::Texture startButtonTexture;
    sf::Sprite startButtonSprite;
    sf::Texture exitButtonTexture; // New texture for exit button
    sf::Sprite exitButtonSprite;   // New sprite for exit button
    sf::Texture creditButtonTexture; 
    sf::Sprite creditButtonSprite;
    sf::Texture howtoplayButtonTexture; 
    sf::Sprite howtoplayButtonSprite;
 
};