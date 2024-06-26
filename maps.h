#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Map {
protected:
    string name;
    double scale;

public:
    Map(const string& name, double scale) : name(name), scale(scale) {}

    virtual ~Map() = default;

    string getName() const { return name; }
    double getScale() const { return scale; }
    void setScale(double newScale) { scale = newScale; }

    virtual void displayInfo() const {
        cout << "Map: " << name << ", Scale: 1:" << scale << endl;
    }

    virtual void modifyData() {
        cout << "Enter new scale: ";
        cin >> scale;
    }
};

class Shop {
private:
    vector<Map*> maps;

public:
    ~Shop() {
        for (auto map : maps) {
            delete map;
        }
    }

    void addMap(Map* map) {
        maps.push_back(map);
    }

    void displayAllMaps() const {
        for (const auto& map : maps) {
            map->displayInfo();
        }
    }

    void modifyMapData(const string& mapName) {
        for (auto& map : maps) {
            if (map->getName() == mapName) {
                map->modifyData();
                return;
            }
        }
        cout << "Map not found." << endl;
    }
};
