/**
 * @file main.cpp
 * 
 * @brief How to separate class implementation(.cpp) and interface(.hpp) files in your project structure.
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
#include "Container.hpp"

int main() {
  Container contain1 = Container("Liam");
  std::cout << contain1.getName() << std::endl;

  contain1.setName("Cypher");
  std::cout << contain1.getName() << std::endl;
}