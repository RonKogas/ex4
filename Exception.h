#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>
#include <iostream>

class InvalidPlayerName : public std::exception
{
public:
    InvalidPlayerName() {};
};

#endif //EXCEPTION_H
