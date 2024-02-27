#include<iostream>
#include<string>
#include "Stats.cpp"
using namespace std;


//
//                  !!!!!!!!!!   CAUTION: DO NOT TEST IN .h   !!!!!!!!!!
//

// Public Variable
// In case: include doesn't work
int health;
int stress;
int hunger;
int stamina;

// Random Incident 1 - 5: Sick
void RI1(){
    cout << "Paul was sick.";
    health -= 10;
};

void RI2(){
    cout << "Ramona was sick.";
    health -= 10;
};

void RI3(){
    cout << "Hugo was sick.";
    health -= 10;
};

void RI4(){
    cout << "Paula was sick.";
    health -= 10;
};

void RI5(){
    cout << "Alejandro was sick.";
    health -= 10;
};

// Random Incident 6 - 10: Depressed
void RI6(){
    cout << "Paul was depressed.";
    stress += 10;
};

void RI7(){
    cout << "Ramona was depressed.";
    stress += 10;
};

void RI8(){
    cout << "Hugo was depressed.";
    stress += 10;
};

void RI9(){
    cout << "Paula was depressed.";
    stress += 10;
};

void RI10(){
    cout << "Alejandro was depressed.";
    stress += 10;
};

// Random Incident 11 - 15: Hungry
void RI11(){
    cout << "Paul was hungry.";
    hunger -= 10;
};

void RI12(){
    cout << "Ramona was hungry.";
    hunger -= 10;
};

void RI13(){
    cout << "Hugo was hungry.";
    hunger -= 10;
};

void RI14(){
    cout << "Paula was hungry.";
    hunger -= 10;
};

void RI15(){
    cout << "Alejandro was hungry.";
    hunger -= 10;
};

// Random Incident 16 - 20: Tired
void RI16(){
    cout << "Paul was tired.";
    stamina -= 10;
};

void RI17(){
    cout << "Ramona was tired.";
    stamina -= 10;
};

void RI18(){
    cout << "Hugo was tired.";
    stamina -= 10;
};

void RI19(){
    cout << "Paula was tired.";
    stamina -= 10;
};

void RI20(){
    cout << "Alejandro was tired.";
    stamina -= 10;
};