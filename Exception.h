#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>
using namespace std;

class Exception:public exception
{
public:
    const char* what()
    {
        return "Nu se produc filme de comedie!\n";
    }
};

#endif // EXCEPTION_H
