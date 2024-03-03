#include<iostream>
#include<string>
using namespace std;

// crafting materials
struct crafting_materials
{
    public:
        
        // Crafting Materials
        int woods = 10;
        int scrap_metal = 30;
        int iron = 50;
        int tools_kit = 100;

        // Car Health
        int car_health;

        void Car_Repair();
};

// Car Health Max
struct car_health_max
{
    public:
        int CHM = 100;
};

// Repairing Car
void crafting_materials::Car_Repair(){
    char choice;
    switch (choice){
        case 'woods':
            car_health += 10;
        case 'scrap_metal':
            car_health += 30;
        case 'iron':
            car_health += 50;
        case 'tools_kit':
            car_health += 100;
    }
};