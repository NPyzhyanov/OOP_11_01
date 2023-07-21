#ifndef GREETER_H
#define GREETER_H

class Greeter
{   
public:
    Greeter();
    std::string greet(std::string name);
    
private:
    std::string common_part;
    
};

#endif // GREETER_H
