// These are the header files that we need for the code.
// We need iostream for input and output, We also need string and vector.

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>

//We use the using namespace std directive to avoid having to prefix standard library functions and objects with std::.
using namespace std;

struct Item {
    string name;
    int quantity;
    double price;
};

vector<Item> inventory;


//We define a struct called Item that has three members: name, quantity, and price. This will be used to store information about each item in the inventory.

void addNewItem() {
    Item newItem;
    cout << "Enter item name: ";
    getline(cin, newItem.name);
    cout << "Enter quantity: ";
    cin >> newItem.quantity;
    cout << "Enter price: ";
    cin >> newItem.price;
    inventory.push_back(newItem);
}

//We define a global variable inventory, which is a vector of Item structs. This will be used to store all of the items in the inventory.

void displayInventory() {
    cout << "Inventory:\n";
    for (const auto& item : inventory) {
        cout << item.name << "\t" << item.quantity << "\t$" << item.price << endl;
    }
}
        //Inside the loop, we print out a menu of options and use cin to read in the user's choice. We then use a switch statement to call the appropriate function based on the user's choice.
        //In main(), we define a variable choice and enter a while loop that continues until the user chooses to exit.
        //If the user chooses to add a new item, we call addNewItem().
        //If the user chooses to display the inventory, we call displayInventory().
        //If the user chooses to exit, we print a message and the loop will exit.
        //If the user enters an invalid choice, we print a message telling them so.
        
void intro();
int main() {
	intro();
    int choice = 0;
    while (choice != 3) {
        cout << "Choose an option:\n";
        cout << "1. Add new item\n";
        cout << "2. Display inventory\n";
        cout << "3. Exit\n";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
        //Inside addNewItem(), we define a newItem struct and use getline() to read in the item name, since it may contain spaces. We then use cin to read in the quantity and price, and push the new item onto the inventory vector.
                addNewItem();
                break;
            case 2:
        //We define a function displayInventory() that loops through the inventory vector and prints out the name, quantity, and price of each item.
        //In main(), we define a variable choice and enter a while loop that continues until the user chooses to exit.

                displayInventory();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }
    return 0;
}
        // Introduction section 
void intro(){
    cout << "\n\n\n\t     INVENTORY SYSTEM";
    cout << "\n\n\n\n\t     MADE BY:AJIBADE SEGUN";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0675";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
