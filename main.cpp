#include <iostream>
#include <cstring>
#include "rpn.hpp"

int main(int c, char **v)
{
    try
    {
        if(c == 2)
        {
            RPN rpn;
            std::cout << rpn.func(v[1]) << std::endl;
        }
        else
            throw std::runtime_error("invalid argument\nusage: ./rpn \"1 2 3 + +\"");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}