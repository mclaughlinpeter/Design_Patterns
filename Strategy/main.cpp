#include <iostream>
#include "person.hpp"
#include "addressbook.hpp"
#include "simpleformatter.hpp"

int main()
{
    Person p1("Joe", "Bloggs", 25);
    Person p2("Andy", "Barrow", 30);

    SimpleFormatter * myFormatter = new SimpleFormatter();
    AddressBook myAddresses(myFormatter);

    myAddresses.AddAddress(p1);
    myAddresses.AddAddress(p2);
    myAddresses.PrintAddresses();

    return 0;
}