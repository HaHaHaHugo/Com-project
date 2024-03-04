#include "story0.1.h"
#include "story0.2.h"
#include "story0.3.h"
#include "story0.4.h"


StoryOne::StoryOne() {
    backgroundTexture1.loadFromFile("So.1.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void StoryOne::run(sf::RenderWindow& window) {
    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // Handle other events
        }

        window.clear();
        // Update game logic
        // Render game
        window.display();
    }
}
void StoryOne::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}

StoryTwo::StoryTwo() {
    backgroundTexture2.loadFromFile("So.2.jpg");
    backgroundImage2.setTexture(backgroundTexture2);
    backgroundImage2.setOrigin(backgroundTexture2.getSize().x / 2, backgroundTexture2.getSize().y / 2); // Center the button
    backgroundImage2.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void StoryTwo::run(sf::RenderWindow& window) {
    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // Handle other events
        }

        window.clear();
        // Update game logic
        // Render game
        window.display();
    }
}
void StoryTwo::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage2);
}

StoryThree::StoryThree() {
    backgroundTexture3.loadFromFile("So.3.jpg");
    backgroundImage3.setTexture(backgroundTexture3);
    backgroundImage3.setOrigin(backgroundTexture3.getSize().x / 2, backgroundTexture3.getSize().y / 2); // Center the button
    backgroundImage3.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void StoryThree::run(sf::RenderWindow& window) {
    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // Handle other events
        }

        window.clear();
        // Update game logic
        // Render game
        window.display();
    }
}
void StoryThree::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage3);
}

StoryFour::StoryFour() {
    backgroundTexture4.loadFromFile("So.4.jpg");
    backgroundImage4.setTexture(backgroundTexture4);
    backgroundImage4.setOrigin(backgroundTexture4.getSize().x / 2, backgroundTexture4.getSize().y / 2); // Center the button
    backgroundImage4.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void StoryFour::run(sf::RenderWindow& window) {
    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // Handle other events
        }

        window.clear();
        // Update game logic
        // Render game
        window.display();
    }
}
void StoryFour::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage4);
}
