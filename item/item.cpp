#include<iostream>
#include <string>
#include<vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

// allfunction
struct items
{
    void Heal();
    void Books();
    void Crafting_Materials();
    void Car_Items();
    void Foods();
};

// heal items + function
void items::Heal(){
    int bandage = 10;
    int medicine = 25;
    int syring = 40;
    int bloodbag = 50;
    int firstaidkit = 75;
    int medicbag = 100;
};

// learning items + function
void items::Books(){
    int books_survival = 10;
    int books_crafting = 10;
    int books_combat = 10;
    int books_stealth = 10;
};

// crafting items + function
void items::Crafting_Materials(){
    int woods = 10;
    int scrap_metal = 30;
    int iron = 50;
    int tools_kit = 100;
};

// car items + function
void items::Car_Items(){
    int gasolin_tank = 25;
};

// food items + function
void items::Foods(){

    // Drink
    int water_bottle = 10;
    int juice_box = 25;
    int coffee = 50;
    int milk_gallon = 75;

    // Foods
    int sandwich = 10;
    int instant_noodles = 25;
    int rice = 50;
    int canned_food = 75;
    int MRE = 100;

    // Snacks
    int candy = 10;
    int bread = 25;
    int chocolate_chip = 50;
    int chips = 75;
    int fish_n_chips = 100;

    // Fruits
    int melon = 10;
    int banana = 25;
    int jackfruit = 50;
    int pineapple = 75;
};