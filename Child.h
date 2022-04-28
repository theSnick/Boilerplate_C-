//
// Created by Nicole Norman on 2022-04-27.
//

#pragma once
#include "Parent.h"

class Child : public Parent {
    private:
        int id;

    public:
        Child(string, int);
        void print() override;
};

