#include<iostream>
#include<string>

using namespace std;

//
//                  !!!!!!!!!!   CAUTION: DO NOT TEST IN .h   !!!!!!!!!!
//

// Town Tutorial
void Help_Choose_Town(){
    cout << "                  Travel Route" << endl;
    cout << "\n";
    cout << "WARNING: Be careful!, your decision affect to your car" << endl;
    cout << "and your characteers." << endl;
    cout << "\n";
    cout << "It might damaged your car or maybe kill someone." << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};


// Consuming Tutorial
void Help_Eat(){
    cout << "                   Consuming" << endl;
    cout << "\n";
    cout << "Each food you eat will increase your hunger stats" << endl;
    cout << "differently. Depends on who eat it." << endl;
    cout << "Choose it according to the situation." << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};

// Healing Tutorial
void Help_Heal(){
    cout << "                   Healing" << endl;
    cout << "\n";
    cout << "Each item you pick will increase your health stats" << endl;
    cout << "differently. Depends on who use it." << endl;
    cout << "Choose it according to the situation." << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};

// Hunting Tutorail
void Help_Hunting(){
    cout << "                      Hunting" << endl;
    cout << "\n";
    cout << "Ability of Combat and Survival will use in here." << endl;
    cout << "The more your character have. The more opportunities you have." << endl;
    cout << "Depends on, how much does each characrters have." << endl;
    cout << "             --- ENTER TO CONTINUE --- \n";
    cin.get();
};

// Warzone Driveby Tutorial
void Help_WarzoneDriveby(){
    cout << "                      Warzone" << endl;
    cout << "\n";
    cout << "If you travel into warzone, this decition will appear." << endl;
    cout << "If you choose to roundabout. You're certainly safe." << endl;
    cout << "But lost more gasolin than normal route." << endl;
    cout << "\n";
    cout << "If you choose to trespassing. You're in danger." << endl;
    cout << "And the Avoid Traps Mini-Game will appear to play" << endl;
    cout << "But you can safe gasolin more than roundabout." << endl;
    cout << "\n";
    cout << "If you choose to wait. The time passed by 2 hours" << endl;
    cout << "per 1 time waiting." << endl;
    cout << "\n";
    cout << "Choose carefully, some choice might kill someone" << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};

// Stress Tutorial
void Help_Stress(){
    cout << "                     Stress" << endl;
    cout << "\n";
    cout << "The more you stress, The more you loss health" << endl;
    cout << "You can relax by listened to music, " << endl;
    cout << "play instrument, relax. If the character is" << endl;
    cout << "relaxing. He/She can't do nothing unless you wake" << endl;
    cout << "him/her. Don't be too panic." << endl;
    cout << "If some character get too much stress." << endl;
    cout << "They will end up unpeacefully" << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};

// Avoid Trap Mini-Game Tutorial
void Help_AvoidTrap(){
    cout << "                    Avoid Trap" << endl;
    cout << "\n";
    cout << "You have to avoid all of the traps in the road." << endl;
    cout << "There's no helping items, You can't use any items" << endl;
    cout << "Unless you passed the road. If you got too much" << endl;
    cout << "damage. It has a chance to take damage to your" << endl;
    cout << "characters to. That's mean they can died if you" << endl;
    cout << "take more damage. Most unlucky, you car explode" << endl;
    cout << "and all of your characters are died immidiatly." << endl;
    cout << "            --- ENTER TO CONTINUE --- \n";
    cin.get();
};