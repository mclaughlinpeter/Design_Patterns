#pragma once

#include <string>
#include <vector>

class Formatter;
class Person;

class AddressBook 
{
private:
    Formatter * _formatter = nullptr;
    std::vector<Person> * _addresses;
public:
    AddressBook(Formatter * fmtr);
    ~AddressBook();
    void AddAddress(const Person & addr);
    void PrintAddresses() const;
};

// check for need for copy ctor and assignment operator