#include "addressbook.hpp"
#include "formatter.hpp"
#include "person.hpp"

AddressBook::AddressBook(Formatter * fmtr)
{
    _formatter = fmtr;
    _addresses = new std::vector<Person>();
}

AddressBook::~AddressBook()
{

}

void AddressBook::PrintAddresses() const
{

}
