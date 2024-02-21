#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

char input;
string d;

class shop{
        string item1;
        string item2;
        string item3;
        string item4;
        string item5;
        string item6;
        string item7;
        string item8;
    public:
        shop(string,string); //can hold item for number of string in shop()
};

class select{
        int x;
        int y;
        bool selected;
        bool enter;
    public:
        void direction();
        bool selected_yes(int,int);
        bool enter_yes();
};

shop item_in_shop1("city a","s item"); //can hold item for number of string in item_in_shop();
//shop item_in_shop2(--------);
//shop item_in_shop3(--------);

shop::shop(string a, string b){
    item1 = a; item2 = b;
}

void start_game(){

}

void select::direction() {
    enter = false;
    switch(input) {
        case 'w': y--; break;
        case 'a': x--; break;
        case 's': y++; break;
        case 'd': x++; break;
        case 'e': enter = true; break;
        default: break;
    }
}

bool select::selected_yes(int a,int b){
    return true;
}

bool select::enter_yes(){
    if(enter==true) return true;
    else return false;
}

void show_screen(){

}

int main(){
    select player;
    start_game();
    while(true){
        d = "No";
        show_screen();
        cin >> input;
        player.direction();
        if(player.enter_yes()==true) d = "Yes"; //temporary check for 'e' = enter = select that item/chioce
        cout << d;
        cout << endl;
    }
    return 0;
}