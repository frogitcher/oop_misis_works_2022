#include <iostream>
int main()
{
    double value;
    while(!(std::cin >> value)) 
    {
        std::cin.clear();
        std::cin.ignore();
    }
    
    return value;   
}
 
int i_dig_foo()
{
    char value = 0;
    while(value < '0' || value > '9')
    {
        std::cin.get(value);
    }
    
    return value - '0';
}