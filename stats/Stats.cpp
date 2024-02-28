#include<iostream>
#include <string>
#include<vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

// stats + abilities + allfunction
struct stats
{
    public:

        //stats
        string name;
        int health;
        int stress;
        int hunger;
        int stamina;

        //abilities
        int survival;
        int crafting;
        int combat;
        int stealth;

        //function
        void showStats();
        void showAbilities();
        void abilities();
        void abilities_max();
};

// enemy stats
struct enemy_stats
{
    public:

        // enemy_stats
        string enemy_name;
        int enemy_health;
        int enemy_attack;

        // function
        void showEnemyStats();
};

// limit of stats
struct stats_max
{
    public:
        int health_max = 100;
        int stress_max = 100;
        int hunger_max = 100;
        int stamina_max = 100;
};

// limit of enemy stats
struct enemy_stats_max
{
    public:
        int EHM = 50;
};

// limit of abilities
struct abilities_max
{
    public:
        int survival_max = 100;
        int crafting_max = 100;
        int combat_max = 100;
        int stealth_max = 100;
};

// show character_stats
void stats::showStats(){
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Stress: " << stress << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Stamina: " << stamina << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

// show character_abilities
void stats::showAbilities(){
    cout << "Name: " << name << endl;
    cout << "Survival: " << survival << endl;
    cout << "Crafting: " << crafting << endl;
    cout << "Combat: " << combat << endl;
    cout << "Stealth: " << stealth << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
};

// show enemy stats
void enemy_stats::showEnemyStats(){
    cout << "Name: " << enemy_name << endl;
    cout << "Health: " << enemy_health << endl;
    cout << "Damage: " << enemy_attack << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
};

// Test ShowStats
int main()
{
    // name , health , stress , hunger , stamina , survival , crafting , combat , stealth
    stats Paul = {"Paul",70,0,80,80,50,50,30,10};
    stats Ramona = {"Ramona",50,0,100,70,80,20,20,0};
    stats Hugo = {"Hugo",100,0,100,100,90,70,60,0};
    stats Paula = {"Paula",50,0,50,100,40,0,10,90};
    stats Alejandro = {"Alejandro",70,0,70,100,60,80,80,0};

    enemy_stats Deer = {"Deer",50,0};
    enemy_stats Bear = {"Bear",50,20};

    // stats
    Paul.showStats();
    Ramona.showStats();
    Hugo.showStats();
    Paula.showStats();
    Alejandro.showStats();

    // abilities
    Paul.showAbilities();
    Ramona.showAbilities();
    Hugo.showAbilities();
    Paula.showAbilities();
    Alejandro.showAbilities();

    // enemy stats
    Deer.showEnemyStats();
    Bear.showEnemyStats();

}