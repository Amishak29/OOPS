#include <iostream>
using namespace std;

class A {
public:
    virtual void show() = 0;  // Pure virtual function
};

class B : public A {
public:
    void show() override {  // Override the pure virtual function
        cout << "Heya b" << endl;
    }
};

int main() {
    A* bptr;   // Base class pointer
    B aa;       // Derived class object
    bptr = &aa; // Assign derived class object to base class pointer

    bptr->show();  // Call derived class function using base class pointer

    return 0;
}
