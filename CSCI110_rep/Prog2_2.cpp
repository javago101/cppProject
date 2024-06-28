//richer scale determine
/*
Prolog
a. Program Description:
b. Author: Guoqing Wang
c. Date and time: 27/6/2024
d. Input variables:
e. Process Flow:
f. Output variables:
*/

/*
Pseudocode:

*/

/*
do-while loop:

While (True)
{
cout << "Do you want to continue ? (y/n)" ;
if (ans != "n")
      break,
}

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    float richer;
    
    cout << "please enter the richer you got:";
    cin >> richer;

    if(richer >= 8){
    cout << "In those situation when rechiher=" << richer << ": most structures will fall!" << endl;}

    else if(richer >= 7){
    cout << "In those situation when rechiher=" << richer << ": many buildings will be destroyed!" << endl;}

    else if(richer >= 6){
    cout << "In those situation when rechiher=" << richer << ": many buildings will be considerably damaged,some collapse!" << endl;}

    else if(richer >= 4.5){
    cout << "In those situation when rechiher=" << richer << ":only the poorly constructed buildings will be damaged!" << endl;}
    
    else {cout << "In those situation when rechiher=" << richer << ":no destruction of building!" << endl;}
    
    return 0;
}