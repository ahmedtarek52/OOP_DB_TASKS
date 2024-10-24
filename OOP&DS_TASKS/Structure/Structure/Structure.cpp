#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;  
};

struct Inventory {
    Item items[10]; 
    int itemCount;  

    Inventory() {
        itemCount = 0; 
    }

    void addItem(const string& itemName) {
        if (itemCount < 10) { 
            items[itemCount].name = itemName; 
            itemCount++; 
            cout << "Added: " << itemName << "\n"; 
        }
        else {
            cout << "Inventory is full! Cannot add: " << itemName << "\n";
        }
    }

    Item getItem(int index) {
        if (index >= 0 && index < itemCount) {
            return items[index]; 
        }
        else {
            cout << "Invalid index! Returning empty item.\n";
            return Item(); 
        }
    }

    void displayInventory() const {
        cout << "\nInventory:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << "- " << items[i].name << "\n";
        }
    }
};

int main() {
    Inventory playerInventory; 

    playerInventory.addItem("Sword");
    playerInventory.addItem("Health Potion");
    playerInventory.addItem("Shield");
    playerInventory.displayInventory();

    Item retrievedItem = playerInventory.getItem(1); 
    cout << "Retrieved Item: " << retrievedItem.name << "\n";

    return 0;
}
