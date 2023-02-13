/**
 * @file forEachLoop.cpp
 * 
 * @brief for each loop
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  
  //for (variable : collection) {  body of for each loop  }
  for (int n : arr) {
    cout << n << endl;
  }

}