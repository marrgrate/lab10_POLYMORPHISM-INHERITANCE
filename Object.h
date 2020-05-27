#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Object
{
public:
	virtual void Print() = 0;
    friend ostream& operator<<(ostream& os, Object* output) 
    {
        output->Print();
        return os;
    }
};






