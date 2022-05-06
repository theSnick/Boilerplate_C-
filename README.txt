//--------------------------------------------------
// ## Boiler plate C++ program
//--------------------------------------------------

- simple single level of inheritance (parent > child)
- main method creates an object of type child and calls the polymorphic print method
- contains an example of an abstract class


//--------------------------------------------------
// ## Important Notes On C++
//--------------------------------------------------

- use -> to call methods of a pointer object
- use nullptr
- never include .cpp file in another file (only include .h file)

- forward reference
    class C2 instead of #include "C2.h"

- multiple inheritance
    class Square : public Rectangle, public Shape

- downcasting
    if (dynamic_cast<MyClass *>(obj) != nullptr)
        dynamic_cast<MyClass *>(obj)

- 'using' keyword
    if overloading method in child class & want access to parent's version:
        classB : public A {
            public:
                using A::foo;
                void foo(int x);
        }

//--------------------------------------------------
// ## Creating objects
//--------------------------------------------------

No () if there's no parameters:

Heap based (pointers):
ClassName *obj = new ClassName("MyParam");
ClassName *obj = new ClassName;
- use -> for calling functions

Stack based:
ClassName obj("MyParam");
ClassName obj;
- use . for calling functions

//--------------------------------------------------
// ## Friendship
//--------------------------------------------------

in .h file:
class Node {
    friend class GenericList; // access to all of Node's members
    friend void doStuff(Node*); // gives access to this method
    friend void test::next(); // only the next method of "test" will have access to private data
}

//--------------------------------------------------
// ## Running the program
//--------------------------------------------------

Compile:
clang++ *.cpp -std=c++11

Run:
./a.out