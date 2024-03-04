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

// sound8: Classic Rock1
void sound8()
{
    // Finding Song's Address
    sf::SoundBuffer Sound8;
    if(!Sound8.loadFromFile("Project Sound/Walkman Song/Classic Rock Tape/checkpoint.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound8
    Sound.setBuffer(Sound8);

    // Play
    Sound.play();
};

// sound9: Classic Rock2
void sound9()
{
    // Finding Song's Address
    sf::SoundBuffer Sound9;
    if(!Sound9.loadFromFile("Project Sound/Walkman Song/Classic Rock Tape/Friendship Forever.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound9
    Sound.setBuffer(Sound9);

    // Play
    Sound.play();
};

// sound10: Classic Rock3
void sound10()
{
    // Finding Song's Address
    sf::SoundBuffer Sound10;
    if(!Sound10.loadFromFile("Project Sound/Walkman Song/Classic Rock Tape/Happiness Memory.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound10
    Sound.setBuffer(Sound10);

    // Play
    Sound.play();
};

// sound11: Classic Rock4
void sound11()
{
    // Finding Song's Address
    sf::SoundBuffer Sound11;
    if(!Sound11.loadFromFile("Project Sound/Walkman Song/Classic Rock Tape/Moved On.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound11
    Sound.setBuffer(Sound11);

    // Play
    Sound.play();
};

// sound12: Classic Rock5
void sound12()
{
    // Finding Song's Address
    sf::SoundBuffer Sound12;
    if(!Sound12.loadFromFile("Project Sound/Walkman Song/Classic Rock Tape/My Friend Is Garage.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound12
    Sound.setBuffer(Sound12);

    // Play
    Sound.play();
};

// sound13: My Album Tape1
void sound13()
{
    // Finding Song's Address
    sf::SoundBuffer Sound13;
    if(!Sound13.loadFromFile("Project Sound/Walkman Song/My Album Tape/Can I.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound13
    Sound.setBuffer(Sound13);

    // Play
    Sound.play();
};

// sound14: My Album Tape2
void sound14()
{
    // Finding Song's Address
    sf::SoundBuffer Sound14;
    if(!Sound14.loadFromFile("Project Sound/Walkman Song/My Album Tape/Far Away From There.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound14
    Sound.setBuffer(Sound14);

    // Play
    Sound.play();
};

// sound15: My Album Tape3
void sound15()
{
    // Finding Song's Address
    sf::SoundBuffer Sound15;
    if(!Sound15.loadFromFile("Project Sound/Walkman Song/My Album Tape/Ghosting.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound15
    Sound.setBuffer(Sound15);

    // Play
    Sound.play();
};

// sound16: My Album Tape4
void sound16()
{
    // Finding Song's Address
    sf::SoundBuffer Sound16;
    if(!Sound16.loadFromFile("Project Sound/Walkman Song/My Album Tape/Just A Lovely Dream.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound16
    Sound.setBuffer(Sound16);

    // Play
    Sound.play();
};

// sound16: My Album Tape5
void sound16()
{
    // Finding Song's Address
    sf::SoundBuffer Sound16;
    if(!Sound16.loadFromFile("Project Sound/Walkman Song/My Album Tape/Lavender.wav")){
        cout << "ERROR" << endl;
    }
    sf::Sound Sound;

    // Call Sound16
    Sound.setBuffer(Sound16);

    // Play
    Sound.play();
};