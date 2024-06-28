// Lab1_B

/*
Prolog
a. Program Description : This program calculate the total financial outcomes of buying and selling shares. It computes the total amounts paid and received , commissions paid on both transactions , and the net profit or loss .
b. Author : Guoqing Wang
c. Date and time : 25/6/24
d. Input variables : 
- in_price (float) : Price per share for shares purchased .
- inShare_num (float): Number of shares purchased .
- out_price (float) : Price per share for shares sold. 
- outShare_price (float): Number of shares sold.
e. Process Flow :
1. Input the buying price and number of shares bought .
2. Input the selling pride and number of shares sold .
3. Calculate the total amount for bought and sold shares .
4. Calculate the commission for both transations .
5. Calculate and display the net profit or loss.
f. Output variables : 
_ in_amount (float) : Total amount paid for the shares bought , 
- out_amount (float) : Total amount received from the shares slod, 
_ in_comission (float) : Commission paid on the purchase , 
- out_comission (float) : Commission paid on the sale , 
- diff (float) : Net profit or loss after all transactions .
*/

# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

int main()
{
    float inShare_num,outShare_num,in_price,out_price,inComi_rate,in_comission,outComi_rate,out_comission,in_amount,out_amount,diff;

    // Prompted the user to input the datas
    cout << "please enter the price of the shares you bought: $" ;
    cin >> in_price;
    cout << "please enter the number of the shares you bought: " ;
    cin >> inShare_num;
    cout << "please enter the price of the shares you sold: $" ;
    cin >> out_price;
    cout << "plesa enter the number of the shares you sold: " ;
    cin >> outShare_num;
    cout << "plesa enter the comission rate when you bought the share: " ;
    cin >> inComi_rate; 
    cout << "plesa enter the comission rate when you sold out the share: " ;
    cin >> outComi_rate; 

    // Output the entered value of each variables
    cout << "Here is the value you entered: " << endl;
    cout << "the price of the shares bought in: $" << in_price << endl;
    cout << "the number of shares bought in: "<< inShare_num << endl;
    cout << "the price of the shares sold out: $" << out_price<< endl;
    cout << "the number of the shares sold out: "<< outShare_num << endl;

    // Calculat the results
    in_amount = inShare_num * in_price;
    in_comission = in_amount * inComi_rate;
    out_amount = outShare_num * out_price;
    out_comission = out_amount * outComi_rate;
    diff = - in_amount  + out_amount - in_comission - out_comission;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "the amount you paid for the stocks is: $" << in_amount << endl;
    cout << "the amout of comission you paid your broker when you bought the stock: $" << in_comission << endl;
    cout << "the amount you sold for the stocks is: $" << out_amount << endl;
    cout << "the amout of comission you paid your broker when you sold the stock: $" << out_comission << endl;

    // Determine and display the net profit or loss 
    if(diff >= 0) cout << "Congrates,your total profit is: $" << diff << endl;
    else cout << "Sorry,your total loss is: $" << -diff << endl;

    return 0;


} 