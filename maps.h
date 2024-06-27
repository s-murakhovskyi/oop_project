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

    virtual void displayInfo() const = 0;
    virtual void modifyData() = 0;
};

class PoliticalMap : public Map {
private:
    string region;

public:
    PoliticalMap(const string& name, double scale, const string& region)
        : Map(name, scale), region(region) {}

    void displayInfo() const override {
        cout << "Political Map: " << name << ", Scale: 1:" << scale
            << ", Region: " << region << endl;
    }

    void modifyData() override {
        cout << "Enter new region: ";
        cin >> region;
        cout << "Enter new scale: ";
        cin >> scale;
    }
};

class PhysicalMap : public Map {
private:
    string terrainType;

public:
    PhysicalMap(const string& name, double scale, const string& terrainType)
        : Map(name, scale), terrainType(terrainType) {}

    void displayInfo() const override {
        cout << "Physical Map: " << name << ", Scale: 1:" << scale
            << ", Terrain Type: " << terrainType << endl;
    }

    void modifyData() override {
        cout << "Enter new terrain type: ";
        cin >> terrainType;
        cout << "Enter new scale: ";
        cin >> scale;
    }
};

class GeologicalMap : public Map {
private:
    string geologyType;

public:
    GeologicalMap(const string& name, double scale, const string& geologyType)
        : Map(name, scale), geologyType(geologyType) {}

    void displayInfo() const override {
        cout << "Geological Map: " << name << ", Scale: 1:" << scale
            << ", Geology Type: " << geologyType << endl;
    }

    void modifyData() override {
        cout << "Enter new geology type: ";
        cin >> geologyType;
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

    void modifyMapData(const string& mapName, const double& mapScale) {
        for (auto& map : maps) {
            if (map->getName() == mapName) {
                map->modifyData();
                return;
            }
        }
        cout << "Map not found." << endl;
    }
};
