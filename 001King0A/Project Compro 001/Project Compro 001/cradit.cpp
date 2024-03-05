#include "cradit1.h"
#include "cradit2.h"
#include "cradit3.h"
#include "cradit4.h"
#include "cradit5.h"
#include "cradit6.h"

CraditOne::CraditOne() {
    backgroundTexture1.loadFromFile("Cd1.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditOne::run(sf::RenderWindow& window) {
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
void CraditOne::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}

CraditTwo::CraditTwo() {
    backgroundTexture2.loadFromFile("Cd2.jpg");
    backgroundImage2.setTexture(backgroundTexture2);
    backgroundImage2.setOrigin(backgroundTexture2.getSize().x / 2, backgroundTexture2.getSize().y / 2); // Center the button
    backgroundImage2.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditTwo::run(sf::RenderWindow& window) {
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
void CraditTwo::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage2);
}

CraditThree::CraditThree() {
    backgroundTexture3.loadFromFile("Cd3.jpg");
    backgroundImage3.setTexture(backgroundTexture3);
    backgroundImage3.setOrigin(backgroundTexture3.getSize().x / 2, backgroundTexture3.getSize().y / 2); // Center the button
    backgroundImage3.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditThree::run(sf::RenderWindow& window) {
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
void CraditThree::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage3);
}

CraditFour::CraditFour() {
    backgroundTexture4.loadFromFile("Cd4.jpg");
    backgroundImage4.setTexture(backgroundTexture4);
    backgroundImage4.setOrigin(backgroundTexture4.getSize().x / 2, backgroundTexture4.getSize().y / 2); // Center the button
    backgroundImage4.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditFour::run(sf::RenderWindow& window) {
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
void CraditFour::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage4);
}

CraditFive::CraditFive() {
    backgroundTexture5.loadFromFile("Cd5.jpg");
    backgroundImage5.setTexture(backgroundTexture5);
    backgroundImage5.setOrigin(backgroundTexture5.getSize().x / 2, backgroundTexture5.getSize().y / 2); // Center the button
    backgroundImage5.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditFive::run(sf::RenderWindow& window) {
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
void CraditFive::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage5);
}

CraditSix::CraditSix() {
    backgroundTexture6.loadFromFile("Cd6.jpg");
    backgroundImage6.setTexture(backgroundTexture6);
    backgroundImage6.setOrigin(backgroundTexture6.getSize().x / 2, backgroundTexture6.getSize().y / 2); // Center the button
    backgroundImage6.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void CraditSix::run(sf::RenderWindow& window) {
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
void CraditSix::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage6);
}