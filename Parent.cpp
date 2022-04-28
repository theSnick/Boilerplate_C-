#include "Parent.h"
#include <string>
#include <iostream>

using namespace std;

Parent::Parent() { // null constructor
    name = "Nicole";
}

Parent::Parent(string name) : name(name) {} // constructor w/ initializer
        
void Parent::print() {
    cout << "The name of the parent is: " << name;
}