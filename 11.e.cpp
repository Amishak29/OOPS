#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int val) : a(val) {}
    
    void show() {
        cout << "The value of a is " << a << endl;
    }
    
    void callShow() {
        anotherFunction(this);  // Passing 'this' to another function
    }
    
    static void anotherFunction(A* obj) {
        obj->show();  // Accessing member function through the passed object
    }
};

int main() {
    A obj(100);
    obj.callShow();  // Output: The value of a is 100
    return 0;
}
