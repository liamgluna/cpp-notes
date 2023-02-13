/**
 * @file reference2.cpp
 * 
 * @brief Reference basics
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int &modify(int &n) {
    n++;

    // prints the memory address of n
    cout << "From function: "<< &n << endl;
    return n;
}

int main() {
    int n = 5;

    // prints the memory address of n
    cout << "From main x: " << &n << endl;

    int &ref = modify(n);
    // prints the memory address of ref
    cout << &ref << endl;
}