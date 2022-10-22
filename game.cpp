#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    int swordDamage = rand() % 20 + 10;
    int axeDamage = rand() % 10 + 20;
    int hammerDamage = rand() % 5 + 25;
    int daggerDamage = (rand() % 25 + 5) * 2;
    const int MAX_ITEMS = 5;
    string inventory[MAX_ITEMS];
    int numItems = 0;
    inventory[numItems++] = "Armor";

    cout << "Choose your weapon adventurer.\n";
    cout << "1 - Sword\n";
    cout << "2 - Axe\n";
    cout << "3 - Hammer\n";
    cout << "4 - Daggers\n";

    int choice;
    cout << "Weapon: ";
    cin >> choice;

    switch(choice){
        case 1:
        cout << "\nYou obtained Sword\nbase damage: 10 + random damage : ~ 20";
        break;
        case 2:
        cout << "\nYou obtained Axe\nbase damage: 20 + random damage : ~ 10";
        break;
        case 3:
        cout << "\nYou obtained Hammer\nbase damage: 25 + random damage : ~ 5";
        break;
        case 4:
        cout << "\nYou obtained Daggers\nbase damage: (5 + random damage : ~ 25) * 2";
        break;
        default:
        cout << "\nAdventure those weapons are not available to you...";

    } 
    cout << "\n \nNow to test your new weapon adventurer.";
    if (choice == 1){
        cout << "\nSword did " << swordDamage <<" damage.";
        inventory [numItems++] = "Sword";
        }
    if (choice == 2){
        cout << "\nAxe did " << axeDamage <<" damage.";
        inventory [numItems++] = "Axe";
        }
    if (choice == 3){
        cout << "\nHammer did " << hammerDamage <<" damage.";
        inventory [numItems++] = "Hammer";
        }
    if (choice == 4){
        cout << "\nDaggers did " << daggerDamage <<" damage.";
        inventory [numItems++] = "Daggers";
        }
       cout << "\n\nYour inventory:\n";    //this is where the inventory would be displayed.
    for(int i=0; i < numItems; ++i)
     {
       cout << inventory[i] << endl;
     }
  return 0;
}