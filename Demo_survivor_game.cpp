#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int height = 20, width = 70;
int x_pick = 10, y_pick = 15;
char player_input;

void Buttons() {
    switch (player_input) {
        case 'w':
        y_pick-=2;
        break;
        case 'a':
        x_pick-=2;
        break;
        case 's':
        y_pick+=2;
        break;
        case 'd':
        x_pick+=2;
        break;
        default:
        break;
    }
}
void outline(int i, int j) {
    if((j==0 || j==width-5) && i!=0) cout << "|";
    else if((i==0 || i==height) && j<width-4) cout << "_";
    else cout << " ";
}
void Draw() {
    for(int i=0; i<height+1; i++) {
        for(int j=0; j<width+1; j++) {
            outline(i,j);
        }
        cout << endl;
    }
}
int main() {
    while(true) {
        Draw();
        cin >> player_input;
        Buttons();
    }
return 0;
}