#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Car {
    string model;
    float price;
    float maintenance_cost;
    float insurance_cost;
    float mpg;
    float total_cost;
};

class CarDecisionRecord {
public:
    void calculateTotalCost() {
        const float YEARS = 10, MILES_PER_YEAR = 15000, COST_PER_GALLON = 4;
        vector<Car> cars;
        int num_cars;
        
        cout << "How many car models do you want to compare? ";
        cin >> num_cars;

        for (int i = 0; i < num_cars; ++i) {
            Car car;
            cout << "Enter details for car " << i + 1 << ":" << endl;
            cout << "Model name: ";
            cin >> car.model;
            cout << "Price: $";
            cin >> car.price;
            cout << "Maintenance cost per year: $";
            cin >> car.maintenance_cost;
            cout << "Insurance cost per year: $";
            cin >> car.insurance_cost;
            cout << "MPG (miles per gallon): ";
            cin >> car.mpg;

            car.total_cost = car.price + (car.maintenance_cost + car.insurance_cost) * YEARS + (MILES_PER_YEAR / car.mpg) * COST_PER_GALLON * YEARS;
            cars.push_back(car);
        }

        cout << "\nHere are the details for all the cars you entered:" << endl;
        
        for (int i = 0; i < num_cars; ++i) {
            cout << "\nCar " << i + 1 << " - Model: " << cars[i].model << endl;
            cout << "Price: $" << cars[i].price << endl;
            cout << "Maintenance cost per year: $" << cars[i].maintenance_cost << endl;
            cout << "Insurance cost per year: $" << cars[i].insurance_cost << endl;
            cout << "MPG: " << cars[i].mpg << " miles per gallon" << endl;
            cout << "Total cost over " << YEARS << " years: $" << cars[i].total_cost << endl;
        }

        int chosen_car;
        cout << "\nEnter the number of the car model you want to choose (1-" << num_cars << "): ";
        cin >> chosen_car;
        chosen_car--;  // Adjust for zero-based indexing

        if (chosen_car >= 0 && chosen_car < num_cars) {
            cout << "\nYou chose car model: " << cars[chosen_car].model << endl;
            cout << "The total cost of this car over " << YEARS << " years is: $" << cars[chosen_car].total_cost << endl;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
};

int main() {
    CarDecisionRecord carDecision;
    carDecision.calculateTotalCost();
    return 0;
}
