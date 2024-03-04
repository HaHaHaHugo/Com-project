#include<iostream>
#include<string>
using namespace std;

//
//                  !!!!!!!!!!   CAUTION: DO NOT TEST IN .h   !!!!!!!!!!
//

//                  !!!!!!!!!!   YOU MUST READ OUR STORY CHART FIRST   !!!!!!!!!

// Ending1: You survive
void Ending1(){
    cout << "You survive. You're living peacefully in OreLand." << endl;
    cout << "You become a professional guitarist. He's a teacher" << endl;
    cout << "of musical in college. And  open a little restaurant" << endl;
    cout << "in local town." << endl;
    cout << "\n";
    cout << "      --- ENTER TO CONTINUE --- \n";
    cin.get();

};

// Ending2: You are not survive
void Ending2(){
    cout << "You’re not survival. A soldier found your corpses." << endl;
    cout << "Your corpses are transfer to meat, and sold by" << endl;
    cout << "soldier to starving people. All equipment was sold." << endl;
    cout << "\n";
    cout << "      --- ENTER TO CONTINUE --- \n";
    cin.get();

};