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

    void displayInventory() const {
        cout << "\nInventory:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << "- " << items[i].name << "\n";
        }
    }
};

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

void printMultiplicationTable() {
    for (int n = 1; n <= 12; n++) {
        cout << "5 * " << n << " = " << 5 * n << endl;
    }
}

int main() {
    Inventory playerInventory;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Manage Inventory\n";
        cout << "2. Calculate Factorial\n";
        cout << "3. Print Multiplication Table\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string itemName;
            cout << "Enter item name to add: ";
            cin >> itemName;
            playerInventory.addItem(itemName);
            playerInventory.displayInventory();
            break;
        }
        case 2: {
            int number;
            cout << "Enter a number for factorial: ";
            cin >> number;
            cout << "Factorial of " << number << " is: " << factorial(number) << endl;
            break;
        }
        case 3:
            cout << "Multiplication table of 5:\n";
            printMultiplicationTable();
            break;
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
