#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    // addition
        cout << 10 + 5 << endl;

    // subtracttion
        cout << 10 - 5 << endl;

    // multiplication
        cout << 10 * 5 << endl;

    // division
        cout << 10 / 5 << endl;

    // mod - remainder of division
        cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 1.6;

    // increment wnum
    wnum++; // or you can use wnum += wnum
    
    double subtraction = wnum - dnum;
    cout << subtraction << endl;
    
    // rounding a number
        cout << round(subtraction) << endl;

    // round the number up
        cout << ceil(subtraction) << endl;

    // round the number down
        cout << floor(subtraction) << endl; 

    // power
    // parameters - [num , power of]
        cout << pow(wnum, 2) << endl; // wnum^2
    
    // square root
        cout << sqrt(25) << endl;

    // tell which of parameters is bigger ---- fmin() for opposite functionality
    // parameters - [num1 , num2, ....]
        cout << fmax(wnum, dnum) << endl;

    return 0;
}