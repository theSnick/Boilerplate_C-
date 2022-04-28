#pragma once
#include "AbstractClass.h"
#include <string>

using namespace std;

class Parent : public AbstractClass{
    private:
        string name;

    public:
        // constructor
        Parent();
        Parent(string);

        // methods
        virtual void print() override; // polymorphic method
};