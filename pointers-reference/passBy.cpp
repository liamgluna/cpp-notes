/**
 * @file passBy.cpp
 * 
 * @brief
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

/*
  Basic types (int, float, etc) just pass by value unless you need to modify
  values in a calling function.
  int - 4 bytes
  int& - 8 bytes (64-bit memory address)

  Pass all objects by reference.
  - use the const modifier whenever appropriate to protect yourself from accidentally modifying variables
*/


void byValue(int x, int y) {
    x++;
    y++;
}

void byReference(int &x, int &y) {
    x++;
    y++;
}

void byPointer(int *x, int *y) {
    // ++ operator precedence is higher than *x indirection (dereference).
    // (*x)++;
    // (*y)++;
    *x += 1;
    *y += 1;
}

int main() {
    int x = 1;
    int y = 1;
    byPointer(&x, &y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

}