/**
 * @file pointers.cpp
 * 
 * @brief Pointers basics
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int *ptr = &n;

    cout << "Address of n: " << &n << endl;
    cout << "Pointer variable address pointing to: " << ptr << endl;

    // This is called dereferencing
    cout << "Pointer value: " << *ptr << endl;

    (*ptr)++;
    cout << "Value of n after incrementing the value of *ptr: " << n << endl;

}