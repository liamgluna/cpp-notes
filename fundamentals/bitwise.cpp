/**
 * @file modulus.cpp
 * 
 * @brief modulus operator example (Even or Odd)
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

    // Returns true if n is even
    bool isEven(int n) {
        return !(n & 1);
    }

int main() {
    cout << "Enter integer: ";
    int n; cin >> n;
    isEven(n) ? cout << "Even" : (cout << "Odd" << endl);
}