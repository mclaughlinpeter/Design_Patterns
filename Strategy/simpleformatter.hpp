#pragma once

#include "formatter.hpp"

class SimpleFormatter : public Formatter
{
    virtual std::string Compose(const std::vector<Person> & addresses) override;
};