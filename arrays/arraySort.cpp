/**
 * @file arraySort.cpp
 * 
 * @brief How to sort an array (Selection Sort)
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>


int main() {
  int arr[] = {5, 3, 4, 1, 2}; 
  int arrLength = sizeof(arr)/sizeof(int);

  std::cout << "Array before: " << std::endl;
  for (const auto &num : arr) {
    std::cout << num << " ";
  }


  // Selection Sort
  // Time Complexity: O(n^2)
  for (int i = 0; i < arrLength; i++) {
    for (int j = i+1; j < arrLength; j++) {
      int temp = arr[i];
      if (arr[i] > arr[j]) {
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  std::cout << "\n\nArray after: " << std::endl;
  for (const auto &num : arr) {
    std::cout << num << " ";
  }

}