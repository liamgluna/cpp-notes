/**
 * @file Container.hpp (Interface)
 * 
 * @brief How to separate class implementation(.cpp) and interface(.hpp) files in your project structure.
 * 
 * @author
 *  Liam Luna <liamlarry.luna@lsu.edu.ph>
 */

// Causes the current source file to be included only once in a single compilation
#pragma once

#include <string>

class Container {
  public:
    // Constructor
    Container(std::string name);

    // Getter and Setter
    std::string getName() const;
    void setName(std::string name);

  private:
    // Member Variable(s)
    std::string _name;

};