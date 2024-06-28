//Prog1_10257_5.cpp : This file contains the 'main' function. Program exceution begins and ends there.

/*
Prolog
a. Program Description :This program prompts the user for their first and last names, then greets them. 
   It also takes two float values as input and performs basic arithmetic operations (addition, subtraction, multiplication, division) on these values. 
   The program outputs the results of these operations and compares the two values.
b. Author: guoqing wang
c. Date and time : 24/6/2024
d. Input variables :fname (first name), lname (last name), value1, value2
e. Process Flow :
   1. Prompt user for first name and last name.
   2. Concatenate first and last name to form full name and greet the user.
   3. Prompt user for two float values.
   4. Perform addition, subtraction, multiplication, and division on the input values.
   5. Output the results of the arithmetic operations.
   6. Compare the two values and output which one is greater.
f. Output variables : sum, diff, prod, quot
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fname;
    string lname;
    string full_name;

    float value1;
    float value2;
    float sum;
    float diff;
    float prod;
    float quot;

    // Prompt user for their first name
    cout << "Please enter your first name" << endl;
    cin >> fname;

    // Prompt user for their last name
    cout << "Please enter your last name" << endl;
    cin >> lname;

    // Combine first and last names to form full name
    full_name = fname + " " + lname;
    cout << "Welcome," << full_name << endl;

    // Prompt user for two float values
    cout << "please enter the value of value1" << endl;
    cin >> value1;
    cout << "please enter the value of value2" << endl;
    cin >> value2;

    // Perform arithmetic operations
    sum = value1 + value2;
    diff = value1 - value2;
    prod = value1 * value2;
    quot = value1 / value2;

    // Output the results of the arithmetic operations
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;
    cout << "Quotient= " << quot << endl;

    // Compare the two values
    if(value1 < value2)
    cout << "Value 1 is less than value 2 " << endl;

    else 
    cout << "Value 1 is great than value 2 " << endl;

    return 0;
}
