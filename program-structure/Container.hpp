/**
 * @file Container.hpp (Interface)
 * 
 * @brief How to structure your project to have a separate file for your classes implementation(.cpp) and interface(.hpp file).
 * 
 * @author
 *  Liam Larry G. Luna <liamlarry.luna@lsu.edu.ph>
 */

// Causes the current source file to be included only once in a single compilation
#pragma once

#include <string>

class Container {
  public:
    // Constructor
    Container(std::string name);

    // Getter and Setter
    std::string getName();
    void setName(std::string name);

  private:
    // Member Variable(s)
    std::string _name;

};