#include "person.hpp"
#include <iostream>

Person::Person(std::string fn, std::string ln, int ag)
{
    firstName = fn;
    lastName = ln;
    age = ag;
}

const std::string & Person::GetFirstName() const
{
    return firstName;
}

const std::string & Person::GetLastName() const
{
    return lastName;
}

const int & Person::GetAge() const
{
    return age;
}   

std::string Person::ToString() const
{
    return lastName + ", " + firstName + "; " + std::to_string(age) + "\n";
}