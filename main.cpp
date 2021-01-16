#include <iostream>
#include <cmath>
#include "main.h"
using namespace std;
int main() {
    cout << "Enter a math expression: ";
    cin.getline(defaults,200);
    cout << "Answer: ";
    Read (symbol, sign, defaults);
    cout <<  Write (symbol) <<endl;
    cout << sign << endl;
    cout << symbol << endl;
    delete [] defaults;
    delete [] symbol;
    delete [] sign;
    return 0;
}