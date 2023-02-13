/**
 * @file switch.cpp
 * 
 * @brief Switch statement example. Prints the day of the month.
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Month of February, 2023\n\n";
    cout << "Enter day(number): ";
    int n; cin >> n;
    switch (n % 7) {
        case 0:
            cout << "Tuesday";
            break;
        case 1:
            cout << "Wednesday";
            break;
        case 2:
            cout << "Friday";
            break;
        case 3:
            cout << "Thursday";
            break;
        case 4:
            cout << "Saturday";
            break;
        case 5:
            cout << "Sunday";
            break;
        case 6:
            cout << "Monday";
            break;
        default:
            cout << "Invalid";
            break;
    }
}