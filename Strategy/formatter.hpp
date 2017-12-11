#pragma once

#include <string>
#include <vector>
#include "person.hpp"
//  defines interface for concrete Formatter derived classes to use
class Formatter
{
public:
    virtual std::string Compose(const std::vector<Person> & addresses) = 0;
    Formatter() { }
    virtual ~Formatter() { }
};