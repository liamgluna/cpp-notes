/**
 * @file 2dArrays.cpp
 * 
 * @brief Two-dimensional array
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>

int main() {
  int arr[4][2] = {
    {0, 1},
    {1, 2},
    {2, 3},
    {3, 4}
  };

  // Length of rows and columns
  int numRows = sizeof(arr)/sizeof(arr[0]);
  int numCols = sizeof(arr[0])/sizeof(int);

  // Looping through a 2D array
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      std::cout << "\t" << arr[i][j];
    }
    std::cout << std::endl;
  }
  
}