//rep_2:bussiness case
//program name: Car Selection Decision Maker
/*
Prolog
a. Program Description:The Car Selection Decision Maker is a program designed to assist users in choosing a car based on various criteria. Utilizing decision structures, the program makes recommendations by evaluating user preferences and needs.
b. Author: Guoqing Wang
c. Date and time: 27/6/2024
d. Input variables:car_price, maintenance_cost, insurance_cost, mpg
e. Process Flow:
f. Output variables:total_cost
*/

/*
Pseudocode:
1.set all the variables and constants we need (set the "years,miles_per_year,cost_per_gallon" as constant variables).
2.prompt the user to input : cost, mpg, maintenance,and insurance for each year.
3.calculate the total cost of each car inputed.
4.list all the total cost of each car inputed ,and give the recommadation.(less start or longterm saving.)
*/

/*
Coding Guideline:
1. You need to prompt the user for cost, mpg, maintenance, and
insurance for each car.
2. You need to declare 3 variables (years, miles_per_year, and
cost_per_gallon), as constant variables.
Ex: const float MILES_PER_YEAR = 15000;
3. You need to develop your own algorithm to calculate the total
cost of each car. Use variables only and no numbers.
4. You need to produce a report that shows the final conclusion
based on the total cost of each car. Be user-friendly.
*/

#include <iostream>
#include <string>
using namespace std;

class CarDecisionRecord {
public:
    string car_model;
    float car_price;
    float maintenance_cost;
    float insurance_cost;
    float mpg;
    float total_cost;
    const float YEARS = 10, MILES_PER_YEAR = 15000, COST_PER_GALLON = 4;

    void inputDetails() {
        // Prompt the user to input the car details
        cout << "Please enter the model name of the car you choose: ";
        cin >> car_model;
        cout << "Please enter the price of the car you choose: $";
        cin >> car_price;
        cout << "Please enter the maintenance cost each year of the car you choose: $";
        cin >> maintenance_cost;
        cout << "Please enter the insurance cost each year of the car you choose: $";
        cin >> insurance_cost;
        cout << "Please enter the mpg of the car you choose (miles per gallon): ";
        cin >> mpg;
    }

    void calculateTotalCost() {
        // Calculate the total cost
        total_cost = car_price + (maintenance_cost + insurance_cost) * YEARS + (MILES_PER_YEAR / mpg) * COST_PER_GALLON * YEARS;
    }

    void displayDetails() {
        cout << "\nModel: " << car_model << endl;
        cout << "Price: $" << car_price << endl;
        cout << "Maintenance cost per year: $" << maintenance_cost << endl;
        cout << "Insurance cost per year: $" << insurance_cost << endl;
        cout << "MPG: " << mpg << " miles per gallon" << endl;
        cout << "Total cost over 10 years: $" << total_cost << endl;
    }

    float getTotalCost() const {
        return total_cost;
    }
};

int main() {
    CarDecisionRecord car1, car2;

    cout << "Enter details for the first car:" << endl;
    car1.inputDetails();
    car1.calculateTotalCost();
    car1.displayDetails();

    cout << "\nEnter details for the second car:" << endl;
    car2.inputDetails();
    car2.calculateTotalCost();
    car2.displayDetails();

    if (car1.getTotalCost() < car2.getTotalCost()) {
        cout << car1.car_model << " is your better choice!" << endl;
    } else if (car1.getTotalCost() == car2.getTotalCost()) {
        cout << "You can choose either car, they have the same total cost." << endl;
    } else {
        cout << car2.car_model << " is your better choice!" << endl;
    }

    return 0;
}