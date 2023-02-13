/**
 * @file toh_recursion.cpp
 * 
 * @brief Tower of Hanoi - Recursion
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

// move n-1 disks from a to b
// move one disk from a to c
// move n-1 disks from b to c
void toh(int disks, char a, char b, char c) {
    // base case
    if (disks == 1) {
        cout << "Disk " << disks << " moves from " << a << " to " << c << endl;
    }
    else {
        // recursive call of n-1 from source to auxiliary
        toh(disks-1, a, c, b);
        cout << "Disk " << disks << " moves from " << a << " to " << c << endl;
        // recursive call of n-1 from auxiliary to source
        toh(disks-1, b, a, c);
    }

}

int main() {
    // time complexity: O(2^n)
    // space complexity: call stack maximum size = n, O(n)
    int disks; cin >> disks;
    toh(disks, 'A', 'B', 'C');

}