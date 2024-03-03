#include <SFML/Graphics.hpp>
#include "home.h"
#include "story0.1.h"
#include "story0.2.h"
#include "story0.3.h"
#include "story0.4.h"
#include "cradit1.h"
#include "cradit2.h"
#include "cradit3.h"
#include "cradit4.h"
#include "cradit5.h"
#include "cradit6.h"
#include "main_game.h"
#include <iostream>

int main() 
{
    sf::RenderWindow window(sf::VideoMode(1536, 864), "Lilies on the blood trail");
    window.setFramerateLimit(60);

    Home home;
    StoryOne story1;
    StoryTwo story2;
    StoryThree story3;
    StoryFour story4;
    CraditOne cradit1;
    CraditTwo cradit2;
    CraditThree cradit3;
    CraditFour cradit4;
    CraditFive cradit5;
    CraditSix cradit6;
    MainGame mainGame;

    bool HomeScene = true;
    bool maingame = false;
    bool StoryScene1 = false;
    bool StoryScene2 = false;
    bool StoryScene3 = false;
    bool StoryScene4 = false;
    bool StoryScene5 = false;
    bool StoryScene6 = false;
    bool CraditScene1 = false;
    bool CraditScene2 = false;
    bool CraditScene3 = false;
    bool CraditScene4 = false;
    bool CraditScene5 = false;
    bool CraditScene6 = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            sf::sleep(sf::milliseconds(60));
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                if (HomeScene) {
                    if (home.isStartButtonClicked(mousePosition)) {
                        std::cout << "s1";
                        HomeScene = false;
                        StoryScene1 = true;
                    }
                    else if (home.isExitButtonClicked(mousePosition)) {
                        window.close(); // Close window if exit button is clicked
                    }
                    else if (home.isCreditButtonClicked(mousePosition)) {
                        std::cout << "c1";
                        HomeScene = false;
                        CraditScene1 = true;
                    }
                }
            }
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter) {
                if (StoryScene1) {
                    std::cout << "s2";
                    StoryScene1 = false; // Close StoryScene
                    StoryScene2 = true; // Open HomeScene
                }
                else if (StoryScene2) {
                    std::cout << "s3";
                    // Advance story or switch to next scene
                    StoryScene2 = false;
                    StoryScene3 = true;
                }
                else if (StoryScene3) {
                    std::cout << "s4";
                    // Advance story or switch to next scene
                    StoryScene3 = false;
                    StoryScene4 = true;
                }
                else if (StoryScene4) {
                    std::cout << "s5";
                    // Advance story or switch to next scene
                    StoryScene4 = false;
                    StoryScene5 = true;
                }

                else if (CraditScene1) {
                    std::cout << "c2";
                    // Advance story or switch to next scene
                    CraditScene1 = false;
                    CraditScene2 = true;
                }
                else if (CraditScene2) {
                    std::cout << "c3";
                    // Advance story or switch to next scene
                    CraditScene2 = false;
                    CraditScene3 = true;
                }
                else if (CraditScene3) {
                    std::cout << "c4";
                    // Advance story or switch to next scene
                    CraditScene3 = false;
                    CraditScene4 = true;
                }
                else if (CraditScene4) {
                    std::cout << "c5";
                    // Advance story or switch to next scene
                    CraditScene4 = false;
                    CraditScene5 = true;
                }
                else if (CraditScene5) {
                    std::cout << "c6";
                    // Advance story or switch to next scene
                    CraditScene5 = false;
                    CraditScene6 = true;
                }
                else if (CraditScene6) {
                    std::cout << "h";
                    // Advance story or switch to next scene
                    CraditScene6 = false;
                    HomeScene = true;
                }
            }

            window.clear();

            if (HomeScene) {
                home.draw(window);
            }

            else if (StoryScene1) {
                story1.draw(window);
            }
            else if (StoryScene2) {
                story2.draw(window);
            }
            else if (StoryScene3) {
                story3.draw(window);
            }
            else if (StoryScene4) {
                story4.draw(window);
            }

            else if (CraditScene1) {
                cradit1.draw(window);
            }
            else if (CraditScene2) {
                cradit2.draw(window);
            }
            else if (CraditScene3) {
                cradit3.draw(window);
            }
            else if (CraditScene4) {
                cradit4.draw(window);
            }
            else if (CraditScene5) {
                cradit5.draw(window);
            }
            else if (CraditScene6) {
                cradit6.draw(window);
            }

            else if (maingame) {
                mainGame.draw(window);
            }
        }
        window.display();
        sf::sleep(sf::milliseconds(1000 / 30));
    }
    return 0;
}