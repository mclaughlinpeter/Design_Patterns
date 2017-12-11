#include "addressbook.hpp"
#include "formatter.hpp"
#include "person.hpp"
#include <iostream>

AddressBook::AddressBook(Formatter * fmtr)
{
    _formatter = fmtr;
    _addresses = new std::vector<Person>();
}

AddressBook::~AddressBook()
{
    delete _addresses;
}

void AddressBook::AddAddress(const Person & addr)
{
    _addresses->push_back(addr);
}

void AddressBook::PrintAddresses() const
{
    for (const auto & addr : *_addresses)
    {
        std::cout << addr.ToString();
    }
}
