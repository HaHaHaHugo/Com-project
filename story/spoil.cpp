#include <iostream>
#include<string>
using namespace std;

// Ending1: You survive
void Ending1(){
    cout << "You survive. You are living peacefully in OreLand." << endl;
    cout << "You become a professional guitarist. He's a teacher" << endl;
    cout << "of musical in college. And  open a little restaurant" << endl;
    cout << "in local town." << endl;
    cout << "\n";
    cout << "      --- ENTER TO CONTINUE --- \n";
    cin.get();

};

// Ending2: You are not survive
void Ending2(){
    cout << "You are not survival. A soldier found your corpses." << endl;
    cout << "Your corpses are transfer to meat, and sold by" << endl;
    cout << "soldier to starving people. All equipment was sold." << endl;
    cout << "\n";
    cout << "      --- ENTER TO CONTINUE --- \n";
    cin.get();

};
int main(){
    char choice;
    cout << "What ending do you want?" << endl;
    cout << "\n";
    cout << "Good ? press g, Bad ? press b" << endl;
    cout << "\n";
    cin >> choice;
    if(choice == 'G' || choice == 'g'){
        Ending1();
    }else if(choice == 'B' || choice == 'b'){
        Ending2();
    }
    else{
        cout << "I won't tell you";
    }

    cin.get();

    cout << "Bye!!";

    return 0;
}