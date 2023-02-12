/**
 * How to structure your project to have a separate file for your classes implementation(.cpp) and interface(.hpp file).
 * @file main.cpp
 * @author
 *  Liam Larry G. Luna <liamlarry.luna@lsu.edu.ph>
 */

#include <iostream>
#include "Container.hpp"

int main() {
  Container contain1 = Container("Liam");
  std::cout << contain1.getName() << std::endl;

  contain1.setName("Cypher");
  std::cout << contain1.getName() << std::endl;
}