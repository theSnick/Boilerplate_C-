#pragma once
#include "Parent.h"

class Child : public Parent {
    private:
        int id;

    public:
        Child(string, int);
        void print() override;
};

