/**
 * @file Container.cpp (Implementation)
 * 
 * @brief How to structure your project to have a separate file for your classes implementation(.cpp) and interface(.hpp file).
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