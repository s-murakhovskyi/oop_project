#include <iostream>
#include "maps.h"

using namespace std;

void displayMenu() {
    cout << "Hi, you are in Map Shop! Create your maps and take them whenever you are ready!" << endl;
    cout << "1. Add Political Map" << endl;
    cout << "2. Add Physical Map" << endl;
    cout << "3. Add Geological Map" << endl;
    cout << "4. Display All Maps" << endl;
    cout << "5. Modify Map Data" << endl;
    cout << "6. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Shop shop;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;
        if (choice == 6) break;
        string name;
        double scale;
        switch (choice) {
        case 1: {
            string region;
            cout << "Enter map name: ";
            cin >> name;
            cout << "Enter scale: ";
            cin >> scale;
            cout << "Enter region: ";
            cin >> region;
            shop.addMap(new PoliticalMap(name, scale, region));
            break;
        }
        case 2: {
            string terrainType;
            cout << "Enter map name: ";
            cin >> name;
            cout << "Enter scale: ";
            cin >> scale;
            cout << "Enter terrain type: ";
            cin >> terrainType;
            shop.addMap(new PhysicalMap(name, scale, terrainType));
            break;
        }
        case 3: {
            string geologyType;
            cout << "Enter map name: ";
            cin >> name;
            cout << "Enter scale: ";
            cin >> scale;
            cout << "Enter geology type: ";
            cin >> geologyType;
            shop.addMap(new GeologicalMap(name, scale, geologyType));
            break;
        }
        case 4: {
            shop.displayAllMaps();
            break;
        }
        case 5: {
            cout << "Enter the name of the map to modify: ";
            cin >> name;
            shop.modifyMapData(name, scale);
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
