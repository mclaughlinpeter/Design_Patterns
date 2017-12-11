#pragma once

#include <string>

class Person
{
public:
    Person(std::string fn, std::string ln, int ag);
    const std::string & GetFirstName() const;
    const std::string & GetLastName() const;
    const int & GetAge() const;
    std::string ToString() const;
private:
    std::string firstName;
    std::string lastName;
    int age;
};