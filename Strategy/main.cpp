#include <iostream>
#include "person.hpp"

int main()
{
    Person p1("Joe", "Bloggs", 25);
    Person p2("Andy", "Barrow", 30);

    std::cout << p1.ToString();

    return 0;
}