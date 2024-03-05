#include<iostream>
#include<SFML\Graphics.hpp>
#include<SFML\Window.hpp>
#include<SFML\System.hpp>
#include<math.h>
#include<vector>
#include<cstdlib>

using namespace sf;
using namespace std;

class Bullet {
public:
    CircleShape shape;
    Vector2f currVelocity;
    float maxSpeed;

    Bullet(float radius = 5.f)
        : currVelocity(0.f, 0.f), maxSpeed(15.f)
    {
        this->shape.setRadius(radius);
        this->shape.setFillColor(Color::Red);
    }
};

int main() {
    srand(time(NULL));

    RenderWindow window(VideoMode(800, 600), "360 Shooter!", Style::Default);
    window.setFramerateLimit(60);

    CircleShape player(25.f);
    player.setFillColor(Color::White);

    std::vector<Bullet> bullets;

    RectangleShape enemy;
    enemy.setFillColor(Color::Magenta);
    enemy.setSize(Vector2f(50.f, 50.f));
    int spawnCounter = 20;

    std::vector<RectangleShape> enemies;

    Vector2f playerCenter;
    Vector2f mousePosWindow;
    Vector2f aimDir;
    Vector2f aimDirNorm;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        playerCenter = Vector2f(player.getPosition().x + player.getRadius(), player.getPosition().y + player.getRadius());
        mousePosWindow = Vector2f(Mouse::getPosition(window));
        aimDir = mousePosWindow - playerCenter;
        float magnitude = sqrt(pow(aimDir.x, 2) + pow(aimDir.y, 2));
        aimDirNorm = aimDir / magnitude;

        if (Keyboard::isKeyPressed(Keyboard::A))
            player.move(-10.f, 0.f);
        if (Keyboard::isKeyPressed(Keyboard::D))
            player.move(10.f, 0.f);
        if (Keyboard::isKeyPressed(Keyboard::W))
            player.move(0.f, -10.f);
        if (Keyboard::isKeyPressed(Keyboard::S))
            player.move(0.f, 10.f);

        if (spawnCounter < 20)
            spawnCounter++;

        if (spawnCounter >= 20 && enemies.size() < 50) {
            enemy.setPosition(Vector2f(rand() % window.getSize().x, rand() % window.getSize().y));
            enemies.push_back(RectangleShape(enemy));

            spawnCounter = 0;
        }

        if (Mouse::isButtonPressed(Mouse::Left)) {
            Bullet b1;
            b1.shape.setPosition(playerCenter);
            b1.currVelocity = aimDirNorm * b1.maxSpeed;

            bullets.push_back(b1);
        }

        for (size_t i = 0; i < bullets.size(); i++) {
            bullets[i].shape.move(bullets[i].currVelocity);

            if (bullets[i].shape.getPosition().x < 0 || bullets[i].shape.getPosition().x > window.getSize().x ||
                bullets[i].shape.getPosition().y < 0 || bullets[i].shape.getPosition().y > window.getSize().y) {
                bullets.erase(bullets.begin() + i);
            }
            else {
                for (size_t k = 0; k < enemies.size(); k++) {
                    if (bullets[i].shape.getGlobalBounds().intersects(enemies[k].getGlobalBounds())) {
                        bullets.erase(bullets.begin() + i);
                        enemies.erase(enemies.begin() + k);
                        break;
                    }
                }
            }
        }

        window.clear();

        for (size_t i = 0; i < enemies.size(); i++) {
            window.draw(enemies[i]);
        }

        window.draw(player);

        for (size_t i = 0; i < bullets.size(); i++) {
            window.draw(bullets[i].shape);
        }

        window.display();
    }

    return 0;
}