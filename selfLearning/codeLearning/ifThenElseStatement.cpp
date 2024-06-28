/*

/// pseudocode

If score >= 60 Then
    Display "Passed"
Else
    Display "Failed"
End If

*/

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 60) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }

    return 0;
}
