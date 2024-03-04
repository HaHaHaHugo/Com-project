#include<window.h>
#include<iostream>
#include<sstream>
#include<stdio.h>
#include<SFML/Audio.hpp>
using namespace std;

// Make sure that all of the songs and sounds are in the folder first

// sound17: Negotiation Success
void sound17()
{
    // Finding Song's Address
    sf::SoundBuffer Sound17;
    if(!Sound17.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Negotiation Success.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound17
    Sound.setBuffer(Sound17);

    // Play
    Sound.play();
};

// sound18: Negotiation Failed
void sound18()
{
    // Finding Song's Address
    sf::SoundBuffer Sound18;
    if(!Sound18.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Negotiation Failed.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound18
    Sound.setBuffer(Sound18);

    // Play
    Sound.play();
};

// sound19: Eat
void sound19()
{
    // Finding Song's Address
    sf::SoundBuffer Sound19;
    if(!Sound19.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Eat.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound19
    Sound.setBuffer(Sound19);

    // Play
    Sound.play();
};

// sound20: Heal
void sound20()
{
    // Finding Song's Address
    sf::SoundBuffer Sound20;
    if(!Sound20.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Heal.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound20
    Sound.setBuffer(Sound20);

    // Play
    Sound.play();
};

// sound21: Death
void sound21()
{
    // Finding Song's Address
    sf::SoundBuffer Sound21;
    if(!Sound21.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Death.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound21
    Sound.setBuffer(Sound21);

    // Play
    Sound.play();
};

// sound22: Refuel
void sound22()
{
    // Finding Song's Address
    sf::SoundBuffer Sound22;
    if(!Sound22.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Refuel.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound22
    Sound.setBuffer(Sound22);

    // Play
    Sound.play();
};

// sound23: Mouth Organ
void sound23()
{
    // Finding Song's Address
    sf::SoundBuffer Sound23;
    if(!Sound23.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Mouth Organ.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound23
    Sound.setBuffer(Sound23);

    // Play
    Sound.play();
};

// sound25: Tape Play
void sound25()
{
    // Finding Song's Address
    sf::SoundBuffer Sound25;
    if(!Sound25.loadFromFile("Project Sound/Interface Audio/Charactor and Car/Tape Play.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound25
    Sound.setBuffer(Sound25);

    // Play
    Sound.play();
};

// sound29: Shooting
void sound29()
{
    // Finding Song's Address
    sf::SoundBuffer Sound29;
    if(!Sound29.loadFromFile("Project Sound/Interface Audio/Mini-Game/Shooting.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound29
    Sound.setBuffer(Sound29);

    // Play
    Sound.play();
};

// sound30: Car Bomb
void sound30()
{
    // Finding Song's Address
    sf::SoundBuffer Sound30;
    if(!Sound30.loadFromFile("Project Sound/Interface Audio/Mini-Game/Car Bomb.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound30
    Sound.setBuffer(Sound30);

    // Play
    Sound.play();
};

// sound31: Continue and Using Book
void sound31()
{
    // Finding Song's Address
    sf::SoundBuffer Sound31;
    if(!Sound31.loadFromFile("Project Sound/Interface Audio/UI/Continue.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound31
    Sound.setBuffer(Sound31);

    // Play
    Sound.play();
};

// sound32: Press
void sound32()
{
    // Finding Song's Address
    sf::SoundBuffer Sound32;
    if(!Sound32.loadFromFile("Project Sound/Interface Audio/UI/Press.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound32
    Sound.setBuffer(Sound32);

    // Play
    Sound.play();
};