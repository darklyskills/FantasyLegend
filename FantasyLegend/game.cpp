#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string playerName;
  int maxHP = 20;
  int currentHP;
  int takeDamage;
  int healHP;
  srand(static_cast<unsigned int>(time(0)));
  int swordDamage = rand() % 10 + 3;
  int axeDamage = rand() % 14 + 1;
  int hammerDamage = rand() % 10 + 5;
  int daggerDamage = (rand() % 8 + 2) * 2;
  int knifeDamage = 5;
  int healthPotion = rand() % 5;
  int leatherArmor = rand() % 2;
  int ironArmor = rand() % 5 + 1;
  const int MAX_ITEMS = 5;
  string inventory[MAX_ITEMS];
  int numItems = 0;
  inventory[numItems++] = "Leather Armor";

  cout << "Choose your weapon adventurer.\n";
  cout << "1 - Sword\n";
  cout << "2 - Axe\n";
  cout << "3 - Hammer\n";
  cout << "4 - Daggers\n";

  int choice;
  cout << "Weapon: ";
  cin >> choice;

  switch (choice) {
  case 1:
    cout << "\nYou obtained Sword\nbase damage: 3 + random damage : ~ 10";
    break;
  case 2:
    cout << "\nYou obtained Axe\nbase damage: 1 + random damage : ~ 14";
    break;
  case 3:
    cout << "\nYou obtained Hammer\nbase damage: 5 + random damage : ~ 10";
    break;
  case 4:
    cout
        << "\nYou obtained Daggers\nbase damage: (2 + random damage : ~ 8) * 2";
    break;
  default:
    cout << "\nAdventure those weapons are not available to you...";
  }
  cout << "\n \nNow to test your new weapon adventurer.";
  if (choice == 1) {
    cout << "\nSword did " << swordDamage << " damage.";
    inventory[numItems++] = "Sword";
  }
  if (choice == 2) {
    cout << "\nAxe did " << axeDamage << " damage.";
    inventory[numItems++] = "Axe";
  }
  if (choice == 3) {
    cout << "\nHammer did " << hammerDamage << " damage.";
    inventory[numItems++] = "Hammer";
  }
  if (choice == 4) {
    cout << "\nDaggers did " << daggerDamage << " damage.";
    inventory[numItems++] = "Daggers";
  }
  cout << "\n\nYour inventory:\n";
  for (int i = 0; i < numItems; ++i) {
    cout << inventory[i] << endl;
  }

  currentHP = maxHP;

  cout << "\nYou are already wearing your leather armor.";
  cout << "\nTo test your armor, I'm going to hit you.";
  cout << "\nYour armor is will block: ~ 2 damage";
  currentHP = currentHP - (knifeDamage - leatherArmor);
  cout << "\nYour HP is " << currentHP;
  cout << "\nDo not worry I have a lesser health potion for you.";
  cout << "\nYou drink the potion.";
  currentHP = currentHP + healthPotion;
  cout << "\nYour HP is " << currentHP;
  cout << "\nHere one more gift.";
  inventory[numItems++] = "leaser Health Potion";
  inventory[numItems++] = "leaser Health Potion";
  cout << "\nTwo of them to make sure you live";
  cout << "\n\nYour inventory:\n";
  for (int i = 0; i < numItems; ++i) {
    cout << inventory[i] << endl;
  }
  cout << "\nDon't forget that you can only carry five items in your inventory.";
  cout << "\n\nTell me your name before you leave";
  cout << "\nName: ";
  cin >> playerName;
  cout << "\nGood Luck, " << playerName << ", off on your adventures.";

  if (currentHP <= 0) {
    cout << "\nYou have died";
    return 0;
  }
  return 0;
}