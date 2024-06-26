#include <iostream>
#include "maps.h"

using namespace std;

void displayMenu() {
    cout << "Map Shop" << endl;
    cout << "1. Add Map" << endl;
    cout << "2. Display All Maps" << endl;
    cout << "3. Modify Map Data" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Shop shop;
    int choice;

    while (true) {
        displayMenu();

        cin >> choice;
        if (choice == 4) break;

        string name;
        double scale;
        switch (choice) {
        case 1: {
            cout << "Enter map name: ";
            cin >> name;
            cout << "Enter scale: ";
            cin >> scale;
            shop.addMap(new Map(name, scale));
            break;
        }
        case 2: {
            shop.displayAllMaps();
            break;
        }
        case 3: {
            cout << "Enter the name of the map to modify: ";
            cin >> name;
            shop.modifyMapData(name);
            break;
        }
        default: {
            cout << "Invalid option. Try again." << endl;
            break;
        }
        }
    }
    return 0;
}
