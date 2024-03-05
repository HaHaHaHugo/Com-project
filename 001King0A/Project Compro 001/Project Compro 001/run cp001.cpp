#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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
#include "HTP1.h"
#include "HTP2.h"
#include "HTP3.h"
#include "HTP4.h"
#include "HTP5.h"
#include "HTP6.h"
#include "HTP7.h"
#include "main_game.h"
#include <iostream>

int main() 
{
    sf::RenderWindow window(sf::VideoMode(1536, 864), "Lilies on the blood trail");
    window.setFramerateLimit(120);

    sf::Music music;
    if (!music.openFromFile("1.wav")) {
        std::cerr << "Failed to load music file!" << std::endl;
    }


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
    HowOne how1;
    HowTwo how2;
    HowThree how3;
    HowFour how4;
    HowFive how5;
    HowSix how6;
    HowSeven how7;
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
    bool HowScene1 = false;
    bool HowScene2 = false;
    bool HowScene3 = false;
    bool HowScene4 = false;
    bool HowScene5 = false;
    bool HowScene6 = false; 
    bool HowScene7 = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            sf::sleep(sf::milliseconds(120));
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
                    else if (home.isHowToPlayButtonClicked(mousePosition)) {
                        std::cout << "h1";
                        HomeScene = false;
                        HowScene1 = true;
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
                    std::cout << "home";
                    // Advance story or switch to next scene
                    CraditScene6 = false;
                    HomeScene = true;
                }

                else if (HowScene1) {
                    std::cout << "h2";
                    // Advance story or switch to next scene
                    HowScene1 = false;
                    HowScene2 = true;
                }
                else if (HowScene2) {
                    std::cout << "h3";
                    // Advance story or switch to next scene
                    HowScene2 = false;
                    HowScene3 = true;
                }
                else if (HowScene3) {
                    std::cout << "h4";
                    // Advance story or switch to next scene
                    HowScene3 = false;
                    HowScene4 = true;
                }
                else if (HowScene4) {
                    std::cout << "h5";
                    // Advance story or switch to next scene
                    HowScene4 = false;
                    HowScene5 = true;
                }
                else if (HowScene5) {
                    std::cout << "h6";
                    // Advance story or switch to next scene
                    HowScene5 = false;
                    HowScene6 = true;
                }
                else if (HowScene6) {
                    std::cout << "h7";
                    // Advance story or switch to next scene
                    HowScene6 = false;
                    HowScene7 = true;
                }
                else if (HowScene7) {
                    std::cout << "home";
                    // Advance story or switch to next scene
                    HowScene7 = false;
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

            else if (HowScene1) {
                how1.draw(window);
            }
            else if (HowScene2) {
                how2.draw(window);
            }
            else if (HowScene3) {
                how3.draw(window);
            }
            else if (HowScene4) {
                how4.draw(window);
            }
            else if (HowScene5) {
                how5.draw(window);
            }
            else if (HowScene6) {
                how6.draw(window);
            }
            else if (HowScene7) {
                how7.draw(window);
            }

            else if (maingame) {
                mainGame.draw(window);
            }
        }
        window.display();
        sf::sleep(sf::milliseconds(1000 / 120));
    }
    return 0;
}