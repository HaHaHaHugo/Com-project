#include "HTP1.h"
#include "HTP2.h"
#include "HTP3.h"
#include "HTP4.h"
#include "HTP5.h"
#include "HTP6.h"
#include "HTP7.h"

HowOne::HowOne() {
    backgroundTexture1.loadFromFile("HTP1.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowOne::run(sf::RenderWindow& window) {
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
void HowOne::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}

HowTwo::HowTwo() {
    backgroundTexture2.loadFromFile("HTP2.jpg");
    backgroundImage2.setTexture(backgroundTexture2);
    backgroundImage2.setOrigin(backgroundTexture2.getSize().x / 2, backgroundTexture2.getSize().y / 2); // Center the button
    backgroundImage2.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowTwo::run(sf::RenderWindow& window) {
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
void HowTwo::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage2);
}

HowThree::HowThree() {
    backgroundTexture3.loadFromFile("HTP3.jpg");
    backgroundImage3.setTexture(backgroundTexture3);
    backgroundImage3.setOrigin(backgroundTexture3.getSize().x / 2, backgroundTexture3.getSize().y / 2); // Center the button
    backgroundImage3.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowThree::run(sf::RenderWindow& window) {
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
void HowThree::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage3);
}

HowFour::HowFour() {
    backgroundTexture4.loadFromFile("HTP4.jpg");
    backgroundImage4.setTexture(backgroundTexture4);
    backgroundImage4.setOrigin(backgroundTexture4.getSize().x / 2, backgroundTexture4.getSize().y / 2); // Center the button
    backgroundImage4.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowFour::run(sf::RenderWindow& window) {
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
void HowFour::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage4);
}

HowFive::HowFive() {
    backgroundTexture1.loadFromFile("HTP5.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowFive::run(sf::RenderWindow& window) {
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
void HowFive::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}

HowSix::HowSix() {
    backgroundTexture1.loadFromFile("HTP6.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowSix::run(sf::RenderWindow& window) {
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
void HowSix::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}

HowSeven::HowSeven() {
    backgroundTexture1.loadFromFile("HTP7.jpg");
    backgroundImage1.setTexture(backgroundTexture1);
    backgroundImage1.setOrigin(backgroundTexture1.getSize().x / 2, backgroundTexture1.getSize().y / 2); // Center the button
    backgroundImage1.setPosition(1536 / 2.0f, 400); // Set position relative to window size
    // Initialize game objects, variables, etc.
}
void HowSeven::run(sf::RenderWindow& window) {
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
void HowSeven::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage1);
}
