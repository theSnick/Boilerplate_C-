#include "Parent.h"
#include "Child.h"
#include <iostream>

using namespace std;

int main() {

    Parent* obj = new Child("Nicole", 10);

    obj->print();

    cout << endl << "Hello World" << endl;

    return 0;
}