/**
 * @file whileLoop.cpp
 * 
 * @brief while loop
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
  int number = 1;

  // while (condition) {  body of while loop  }
  // Loop executes until condition is false
  while (number <= 10) {
    cout << number << endl;
    number++;
  }

}