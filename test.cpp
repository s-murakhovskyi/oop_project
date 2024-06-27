//the test code is commented because there are two main functions, and to ru one of them you should comment the other one
//#include <iostream>
//#include <string>
//#include <vector>
//#include "maps.h"
//
//using namespace std;
//
//void testAddMaps(Shop& shop) {
//    shop.addMap(new PoliticalMap("World Politics", 1000000, "Global"));
//    shop.addMap(new PhysicalMap("Mountain Terrain", 500000, "Mountainous"));
//    shop.addMap(new GeologicalMap("Fault Lines", 1200000, "Seismic Zones"));
//    shop.addMap(new DemographicMap("Population Density", 900000, "Urban Areas"));
//    cout << "All maps added successfully.\n";
//}
//
//void testDisplayAllMaps(const Shop& shop) {
//    cout << "Displaying all maps...\n";
//    shop.displayAllMaps();
//}
//
//void testMapAttributes() {
//    PoliticalMap politicalMap("World Politics", 1000000, "Global");
//    PhysicalMap physicalMap("Mountain Terrain", 500000, "Mountainous");
//    GeologicalMap geologicalMap("Fault Lines", 1200000, "Seismic Zones");
//    DemographicMap demographicMap("Population Density", 900000, "Urban Areas");
//
//    cout << "Testing map attributes..." << endl;
//    cout << "Political Map name: " << politicalMap.getName() << ", expected: World Politics" << endl;
//    cout << "Physical Map scale: " << physicalMap.getScale() << ", expected: 500000" << endl;
//    cout << "Geological Map type: " << geologicalMap.getName() << ", expected: Fault Lines" << endl;
//    cout << "Demographic Map demographics: " << demographicMap.getName() << ", expected: Population Density" << endl;
//}
//
//void testModifyMapData(Shop& shop) {
//    cout << "Modifying map data..." << endl;
//    shop.modifyMapData("World Politics", 2000000);
//    shop.modifyMapData("Mountain Terrain", 700000);
//    shop.modifyMapData("Fault Lines", 1500000);
//    shop.modifyMapData("Population Density", 1000000);
//    cout << "All map data modified successfully.\n";
//}
//
//int main() {
//    Shop shop;
//    testAddMaps(shop);
//    testDisplayAllMaps(shop);
//    testMapAttributes();
//    testModifyMapData(shop);
//    
//    cout << "All tests passed!" << endl;
//    return 0;
//}