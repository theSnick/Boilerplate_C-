//
// Created by Nicole Norman on 2022-04-27.
//

#include "Child.h"
#include "Parent.h"
#include <iostream>

using namespace std;

Child::Child(string name, int id) : Parent(name) {
    this->id = id;
}

void Child::print() {
    Parent::print();
    cout << " id: " << id << " ";
}