/**
 * @file Container.cpp (Implementation)
 * 
 * @brief Separate class implementation (.cpp) and interface (.hpp) files in your project structure.
 * 
 * @author
 *  Liam Larry G. Luna <liamlarry.luna@lsu.edu.ph>
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