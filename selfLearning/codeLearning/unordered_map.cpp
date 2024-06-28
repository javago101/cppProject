#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an unordered_map
    unordered_map<string, int> ageMap;

    // Insert elements
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap.insert({"Charlie", 35});
    ageMap.insert(make_pair("Dave", 40));

    // Access elements
    cout << "Alice's age is " << ageMap["Alice"] << endl;

    // Check existence
    if (ageMap.count("Alice")) {
        cout << "Alice is in the map." << endl;
    } else {
        cout << "Alice is not in the map." << endl;
    }

    // Remove an element
    ageMap.erase("Alice");

    // Check existence after removal
    if (ageMap.count("Alice")) {
        cout << "Alice is still in the map." << endl;
    } else {
        cout << "Alice has been removed from the map." << endl;
    }

    // Iterate through the map
    for (const auto& pair : ageMap) {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }

    return 0;
}
