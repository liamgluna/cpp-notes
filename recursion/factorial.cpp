/**
 * @file factorial.cpp
 * 
 * @brief Factorial - Recursion
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;

    // Note: 0! = 1 
    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
}