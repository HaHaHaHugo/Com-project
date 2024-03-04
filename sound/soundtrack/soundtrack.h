#include<window.h>
#include<iostream>
#include<sstream>
#include<stdio.h>
#include<SFML/Audio.hpp>
using namespace std;

//
//                  !!!!!!!!!!   CAUTION: DO NOT TEST IN .h   !!!!!!!!!!
//

// Make sure that all of the songs and sounds are in the folder first

// Sound1: Intro Games Themes
void sound1()
{
    // Finding Song's Address
    sf::SoundBuffer Sound1;
    if(!Sound1.loadFromFile("Project Sound/Song/Nothing change, Still the same.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound1
    Sound.setBuffer(Sound1);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};


// Sound2: Story Telling song
void sound2()
{
    // Finding Song's Address
    sf::SoundBuffer Sound2;
    if(!Sound2.loadFromFile("Project Sound/Song/Western Trail.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound2
    Sound.setBuffer(Sound2);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};

// sound3: Driving song
void sound3()
{
    // Finding Song's Address
    sf::SoundBuffer Sound3;
    if(!Sound3.loadFromFile("Project Sound/Song/Homesick.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound3
    Sound.setBuffer(Sound3);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};

// sound4: Visiting town / Resting song
void sound4()
{
    // Finding Song's Address
    sf::SoundBuffer Sound4;
    if(!Sound4.loadFromFile("Project Sound/Song/Finale Lalluby.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound4
    Sound.setBuffer(Sound4);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};

// sound5: Hunting song
void sound5()
{
    // Finding Song's Address
    sf::SoundBuffer Sound5;
    if(!Sound5.loadFromFile("Project Sound/Song/The Parrot's Party.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound5
    Sound.setBuffer(Sound5);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};

// sound6: Avoid Trap Mini-Game song
void sound6()
{
    // Finding Song's Address
    sf::SoundBuffer Sound6;
    if(!Sound6.loadFromFile("Project Sound/Song/Addict.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound6
    Sound.setBuffer(Sound6);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};

// sound7: Ending song
void sound7()
{
    // Finding Song's Address
    sf::SoundBuffer Sound7;
    if(!Sound7.loadFromFile("Project Sound/Song/Far Away From There.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound7
    Sound.setBuffer(Sound7);

    // Looping
    Sound.setLoop(true);

    // Play
    Sound.play();
};