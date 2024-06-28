#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Constants
const int YEARS = 10;
const int MILES_PER_YEAR = 15000;
const float PRICE_PER_GALLON = 4.0;

struct Car {
    string name;
    float price;
    float maintenance_cost;
    float insurance_cost;
    float mpg;
    float total_cost;
};

class CarDecisionMaker {
    vector<Car> cars;

    public:
    void getInformation() {
        Car car;
        cout << "Enter car name: ";
        cin >> car.name;
        cout << "Enter car price: ";
        cin >> car.price;
        cout << "Enter car maintenance cost each year: ";
        cin >> car.maintenance_cost;
        cout << "Enter car insurance cost each year: ";
        cin >> car.insurance_cost;
        cout << "Enter car miles per gallon (mpg): ";
        cin >> car.mpg;
        car.total_cost = calculateTotalCost(car);
        cars.push_back(car);
    }

    float calculateTotalCost(Car& car) {
        // Calculate fuel cost over 10 years
        float fuel_cost = (MILES_PER_YEAR / car.mpg) * PRICE_PER_GALLON * YEARS;
        // Total cost is the sum of price, maintenance, insurance, and fuel costs over 10 years
        return car.price + (car.maintenance_cost * YEARS) + (car.insurance_cost * YEARS) + fuel_cost;
    }

    void choiceHolder() {
        int numCars;
        cout << "How many cars do you want to compare? ";
        cin >> numCars;
        for (int i = 0; i < numCars; ++i) {
            cout << "Enter details for car " << i + 1 << endl;
            getInformation();
        }
    }

    void decisionMaker() {
        if (cars.empty()) {
            cout << "No cars to compare." << endl;
            return;
        }
        Car bestCar = cars[0];
        for (const auto& car : cars) {
            if (car.total_cost < bestCar.total_cost) {
                bestCar = car;
            }
        }
        cout << "The best car choice is: " << bestCar.name << " with a total cost of " << bestCar.total_cost << endl;
    }
};

int main() {
    CarDecisionMaker decisionMaker;
    decisionMaker.choiceHolder();
    decisionMaker.decisionMaker();
    return 0;
}
