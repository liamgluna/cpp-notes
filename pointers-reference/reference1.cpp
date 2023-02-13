/**
 * @file reference1.cpp
 * 
 * @brief Reference basics
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int &ref = num;
    cout << "Ref is a reference to num: " << ref << endl;
    ref++;
    cout << num << endl;
}