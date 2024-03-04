#include "main_game.h"

MainGame::MainGame() {
    backgroundTexture.loadFromFile("bg.jpg");
    backgroundImage.setTexture(backgroundTexture);
    backgroundImage.setOrigin(backgroundTexture.getSize().x / 2, backgroundTexture.getSize().y / 2); // Center the button
    backgroundImage.setPosition(1536 / 2.0f, 400 ); // Set position relative to window size
    // Initialize game objects, variables, etc.
}

void MainGame::run(sf::RenderWindow& window) {
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

void MainGame::draw(sf::RenderWindow& window)
{
    window.draw(backgroundImage);
}
