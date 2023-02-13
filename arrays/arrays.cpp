/**
 * @file arrays.cpp
 * 
 * @brief Array fundamentals
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
#include <array> // For begin(), end()


int main() {
  // Declaring an array
  // type arrayName[size];

  int arr1[4]; // Array of 4 elements

  double arr2[6] = {2, 4, 6, 8, 10, 12}; // Same as: double arr2[] = {2, 4, 6, 8, 10, 12};

  // Accessing an array element

  // arrayName[index];
  std::cout << "arr2[0]: " << arr2[0] << std::endl;
  std::cout << "arr2[1]: " << arr2[1] << std::endl;
  std::cout << "and so on..." << std::endl;

  // How to find the length of an array

  // Using sizeof operator
  int arr2Length = sizeof(arr2)/sizeof(double); 

  // Using iterators
  // int arr2Length = std::end(arr2)-std::begin(arr2);

  // Using pointer arithmetic
  // int arr2Length = *(&arr2 +1) - arr2;

  // Looping through an array
  for (int i = 0; i < arr2Length; i++) {
    std::cout << arr2[i] << std::endl;
  }

  // Using for-each loop
  for (int num: arr2) {
    std::cout << num << std::endl;
  }

  // More memory efficient
  // const reference to avoid accidental modifying and avoid temporary copies
  // for (const auto &num : arr2) {
  //   std::cout << num << std::endl;
  // }
}