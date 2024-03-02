#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Car {
public:
    sf::RectangleShape shape;

    Car(float x, float y) {
        shape.setPosition(x, y);
        shape.setSize(sf::Vector2f(30, 20));
        shape.setFillColor(sf::Color::Blue); // Changed car color to blue
    }

    void move(float offsetX) {
        shape.move(offsetX, 0);
    }
};

class Bomb {
public:
    sf::RectangleShape shape;

    Bomb(float x, float y) {
        shape.setPosition(x, y);
        shape.setSize(sf::Vector2f(15, 15));
        shape.setFillColor(sf::Color::White); // Changed bomb color to white
    }

    void move(float offsetX, float offsetY) {
        shape.move(offsetX, offsetY);
    }

    // Reset bomb position with random x coordinate and y coordinate set to 0
    void resetPosition(float windowWidth) {
        float randomX = static_cast<float>(rand() % (static_cast<int>(windowWidth) - static_cast<int>(shape.getSize().x)));
        shape.setPosition(randomX, 0);
    }
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Car Avoids Bomb");
    window.setFramerateLimit(60);

    sf::Clock clock;
    const sf::Time maxPlayTime = sf::seconds(15.f);

    Car car(385, 500);

    // Create an array of bombs
    const int numBombs = 8;
    std::vector<Bomb> bombs;

    for (int i = 0; i < numBombs; ++i) {
        bombs.push_back(Bomb(0, 0));
        bombs[i].resetPosition(window.getSize().x);
    }

    float bombSpeed = 5.f;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sf::Time elapsedTime = clock.getElapsedTime();

        if (elapsedTime > maxPlayTime) {
            // Game over, display "You Won!" message
            std::cout << "You Won!" << std::endl;
            window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && car.shape.getPosition().x > 0)
            car.move(-7);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && car.shape.getPosition().x < window.getSize().x - car.shape.getSize().x)
            car.move(7);

        // Move all bombs with random horizontal offsets
        for (auto& bomb : bombs) {
            bomb.move(0, bombSpeed);

            // Reset bomb position if it goes beyond the window
            if (bomb.shape.getPosition().y > window.getSize().y) {
                bomb.resetPosition(window.getSize().x);
            }

            // Check collision between car and bomb
            if (car.shape.getGlobalBounds().intersects(bomb.shape.getGlobalBounds())) {
                // You can handle what happens when the car hits a bomb (e.g., game over)
                std::cout << "Game Over - You hit a bomb!" << std::endl;
                window.close();
            }
        }

        window.clear(sf::Color::Black); // Changed background color to black

        window.draw(car.shape);

        // Draw all bombs
        for (const auto& bomb : bombs) {
            window.draw(bomb.shape);
        }

        window.display();
    }

    return 0;
}
