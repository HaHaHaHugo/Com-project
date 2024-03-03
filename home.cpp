#include "home.h"

Home::Home() {
    backgroundTexture.loadFromFile("bg.jpg");
    backgroundImage.setTexture(backgroundTexture);
    backgroundImage.setOrigin(backgroundTexture.getSize().x / 2, backgroundTexture.getSize().y / 2); // Center the button
    backgroundImage.setPosition(1536 / 2.0f, 864 / 2.0f); // Set position relative to window size

    startButtonTexture.loadFromFile("sb.png");
    startButtonSprite.setTexture(startButtonTexture);
    startButtonSprite.setScale(200.0f / startButtonTexture.getSize().x, 40.0f / startButtonTexture.getSize().y); // Scale the button
    startButtonSprite.setOrigin(startButtonTexture.getSize().x / 2, startButtonTexture.getSize().y / 2); // Center the button
    startButtonSprite.setPosition(1536 / 4.0f * 3.0f, 300); // Set position relative to window size

    exitButtonTexture.loadFromFile("ex.png");
    exitButtonSprite.setTexture(exitButtonTexture);
    exitButtonSprite.setScale(200.0f / exitButtonTexture.getSize().x, 40.0f / exitButtonTexture.getSize().y); // Scale the button
    exitButtonSprite.setOrigin(exitButtonTexture.getSize().x / 2, exitButtonTexture.getSize().y / 2); // Center the button
    exitButtonSprite.setPosition(1536 / 4.0f * 3.0f, 600); // Set position relative to window size

    optionButtonTexture.loadFromFile("ot.png");
    optionButtonSprite.setTexture(optionButtonTexture);
    optionButtonSprite.setScale(200.0f / optionButtonTexture.getSize().x, 40.0f / optionButtonTexture.getSize().y); // Scale the button
    optionButtonSprite.setOrigin(optionButtonTexture.getSize().x / 2, optionButtonTexture.getSize().y / 2); // Center the button
    optionButtonSprite.setPosition(1536 / 4.0f * 3.0f, 400); // Set position relative to window size

    creditButtonTexture.loadFromFile("cd.png");
    creditButtonSprite.setTexture(creditButtonTexture);
    creditButtonSprite.setScale(200.0f / creditButtonTexture.getSize().x, 40.0f / creditButtonTexture.getSize().y); // Scale the button
    creditButtonSprite.setOrigin(creditButtonTexture.getSize().x / 2, creditButtonTexture.getSize().y / 2); // Center the button
    creditButtonSprite.setPosition(1536 / 4.0f * 3.0f, 500); // Set position relative to window size
}

void Home::draw(sf::RenderWindow& window) {
    window.draw(backgroundImage);
    window.draw(startButtonSprite);
    window.draw(exitButtonSprite);
    window.draw(creditButtonSprite);
    window.draw(optionButtonSprite);
}

bool Home::isStartButtonClicked(sf::Vector2i mousePosition) {
    sf::FloatRect buttonBounds = startButtonSprite.getGlobalBounds();
    return buttonBounds.contains(static_cast<sf::Vector2f>(mousePosition));
}

bool Home::isExitButtonClicked(sf::Vector2i mousePosition) {
    sf::FloatRect buttonBounds = exitButtonSprite.getGlobalBounds();
    return buttonBounds.contains(static_cast<sf::Vector2f>(mousePosition));
}

bool Home::isCreditButtonClicked(sf::Vector2i mousePosition) {
    sf::FloatRect buttonBounds = creditButtonSprite.getGlobalBounds();
    return buttonBounds.contains(static_cast<sf::Vector2f>(mousePosition));
}

bool Home::isOptionButtonClicked(sf::Vector2i mousePosition) {
    sf::FloatRect buttonBounds = optionButtonSprite.getGlobalBounds();
    return buttonBounds.contains(static_cast<sf::Vector2f>(mousePosition));
}