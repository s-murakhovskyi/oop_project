#include <iostream>
#include "maps.h"

using namespace std;

void displayMenu() {
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "You are in Map Shop! Create your maps and take them whenever you are ready!" << endl;
    cout << "1. Add Political Map" << endl;
    cout << "2. Add Physical Map" << endl;
    cout << "3. Add Geological Map" << endl;
    cout << "4. Add Demographic Map" << endl;
    cout << "5. Display All Maps" << endl;
    cout << "6. Modify Map Data" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Shop shop;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;
        if (choice == 7) break;
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
            string demographics;
            cout << "Enter map name: ";
            cin >> name;
            cout << "Enter scale: ";
            cin >> scale;
            cout << "Enter demographics: ";
            cin >> demographics;
            shop.addMap(new DemographicMap(name, scale, demographics));
            break;
        }
        case 5: {
            shop.displayAllMaps();
            break;
        }
        case 6: {
            cout << "Enter the name of the map to modify: ";
            cin >> name;
            shop.modifyMapData(name, scale);
            cout << "Data has been succesfully changed!" << endl;
            break;
        }
        default: {
            cout << "Invalid option." << endl;
            break;
        }
        }
    }
    return 0;
}