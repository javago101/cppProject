// Lab1_A

/*
Prolog
a. Program Description : The program calculate the customer acquisiton cost based on advertising costs , marketing personnel salaries , staff commissions , and the number of new customers acquired. The user is prompted to enter these values ,and the program outputs the calculated cost per customer .
b. Author : Guoqing Wang
c. Date and time : 24/6/2024
d. Input variables : 
- ad_cost (float) : the cost of advertising.
- sal_cost (float) : the salaries of marketing personnel .
- comi_cost (float) : Commissions paid to staff .
- nc_num (int) : the number of new customers acquired .
e. Process Flow :
1. Prompt the user to enter the advertisin cost , markerting personnel salaries , staff commisssions , and the number of the new customers .
2. Calculate the customer acquisition cost usin the formula : (ad_cost + sal_cosr + comi_cost) / nc_num .
3. Display the entered values and the calculated customer acquistiotion cost. 

f. Output variables :
- caq_cost (float) : the cost to acquire each new customer .
*/

# include <iostream>
# include <string>

using namespace std;

int main()
{
    // Variables to hold costs and number of new customers
    float ad_cost, sal_cost, comi_cost ;
    int nc_num;
    float caq_cost;

    // prompt the user to input the data
    cout << "please enter the adversting cost: $";
    cin >> ad_cost;
    cout << "please enter the markering personnel salaries: $";
    cin >> sal_cost;
    cout << "please enter the numbers of new customers acquired:" ;
    cin >> nc_num;
    cout << "please enter the staff comissions: $" ;
    cin >> comi_cost;
    
    // Outout the entered values
    cout << "Here is the value that you entered: " << endl;
    cout << "$" << ad_cost <<endl;
    cout << "$"<< sal_cost<<endl;
    cout << nc_num << endl;
    cout << "$" << comi_cost << endl;

    // Calculate and display customer acquisition cost
    if (nc_num >0) { // check to avoid division by zero
    caq_cost = (ad_cost + sal_cost + comi_cost)/nc_num;
    cout << "the customer aqusition cost is: $" << caq_cost << endl;
    } else {
        cout << "Error : Number of new customers cannot be zero for cost calculate." << endl;
    }
    
    return 0;

}