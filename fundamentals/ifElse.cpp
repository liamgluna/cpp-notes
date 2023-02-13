/**
 * @file ifElse.cpp
 * 
 * @brief if/else statement
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
  bool condition = true;

  // if (condition) {  body of if block  } else { body of else block}
  // if condition is true the "if" block executes
  // if condition is false the "else" block executes
  if (condition) {
    cout << "The condition is true." << endl;
  } else {
    cout << "The condition is false." << endl;
  }
  // Note: You can use "if" statements without "else" 
}