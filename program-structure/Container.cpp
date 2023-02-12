/**
 * @file Container.cpp (Implementation)
 * 
 * @brief How to separate class implementation(.cpp) and interface(.hpp) files in your project structure.
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

#include "Container.hpp"

Container::Container(std::string name) {
  _name = name;
}

std::string Container::getName() {
  return _name;
}

void Container::setName(std::string name) {
  _name = name;
}