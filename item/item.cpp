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
    void Usable_Items();
    void Foods();
    void Currency();
};

// heal items + function  : + Health(Characters)
void items::Heal(){
    int bandage = 10;
    int medicine = 25;
    int syring = 40;
    int bloodbag = 50;
    int firstaidkit = 75;
    int medicbag = 100;
};

// usable items + function
void items::Usable_Items(){

    // Common items
    int gasolin_tank = 25;
    int bullet;

    // Special items : + Stress
    int walkman = 20;
    int mouth_organ = 20;
};

// food items + function : + Hunger
void items::Foods(){

    // Drink
    int water_bottle = 10;
    int juice_box = 25;
    int coffee = 50;
    int moonshine = 75;
    int milk_gallon = 100;

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
    int canned_fruit = 100;

    // Energy Consuming : + Stamina
    int energy_bar = 10;
    int protein_bar = 25;
    int energy_drink = 50;
};