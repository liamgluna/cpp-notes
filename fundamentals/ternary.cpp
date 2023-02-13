/**
 * @file ternary.cpp
 * 
 * @brief Conditional/ternary operator (?) example
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
  bool condition = false;
  // Conditional/ternary operator (?)
  // condition ? X : Y
  // If condition is true then it returns value of X otherwise returns value of Y.
  cout << (condition ? "The condition is true." : "The condition is false.") << endl;
}