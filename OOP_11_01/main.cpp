#include <iostream>
#include <string>

#include "greeter.h"

int main()
{
    std::cout << "Enter your name: ";
    std::string user_name;
    std::cin >> user_name;
    
    Greeter g1;
    
    std::cout << g1.greet(user_name) << std::endl;
    
    return 0;
}
