#include <iostream>
#include "person.hpp"

int main()
{
    std::cout << "Hello, people" << std::endl;

    Person p1("Joe", "Bloggs", 25);
    Person p2("Andy", "Barrow", 30);

    std::cout << p1.GetFirstName() << " " << p1.GetLastName() << ", " << p1.GetAge() << std::endl;

    return 0;
}