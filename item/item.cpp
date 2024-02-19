#include<iostream>
#include <string>
#include<vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct items
{
    void Heal();
    void Books();
    void Crafting_Materials();
}

// heal items + function
void items::Heal(){
    int heal_bandage = 10;
    int heal_medicine = 25;
    int heal_syring = 40;
    int heal_bloodbag = 50;
    int heal_firstaidkit = 75;
    int heal_medicbag = 100;
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