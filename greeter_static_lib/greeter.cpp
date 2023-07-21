#include <string>

#include "greeter.h"

Greeter::Greeter()
{
    common_part = "Hello, ";
}

std::string Greeter::greet(std::string name)
{
    return common_part + name + "!";
}
