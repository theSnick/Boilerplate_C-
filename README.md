# Boilerplate C++ program

- simple single level of inheritance (parent > child)
- main method creates an object of type child and calls the polymorphic print method
- contains an example of an abstract class



## General notes On C++

- use -> to call methods of a pointer object
- use nullptr
- don't include .cpp file in another file (only include .h)
- forward reference wherever possible
  `class MyClass instead of #include "MyClass.h"`
- multiple inheritance  
  `class Square : public Rectangle, public Shape`
- downcasting  
  `if (dynamic_cast<MyClass *>(obj) != nullptr)`
  `dynamic_cast<MyClass *>(obj)`
- if overloading method in child class & want access to parent's version use 'using' keyword:  
  `        classB : public A {
  public:  
  using A::foo;  
  void foo(int x);  
  }`


## Creating objects

**Heap based (pointers):**
`ClassName *obj = new ClassName("MyParam");`
`ClassName *obj = new ClassName;`
- use -> for calling functions
- no () if there's no parameters:

**Stack based:**
`ClassName obj("MyParam");`
`ClassName obj;`
- use . for calling functions


## Friendship

in .h file:  
`class Node {  
friend class GenericList; // access to all of Node's members  
friend void doStuff(Node*); // gives access to this method  
friend void test::next(); // only the next method of "test" will have access to private data  
}`


## Running the program

Compile:  
clang++ *.cpp -std=c++11

Run:  
./a.out