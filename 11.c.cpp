#include <iostream>
using namespace std;

class A {
    int a;
public:
    A() : a(0) {}
    A& setData(int value) {
        this->a = value;  // Set the value of a
        return *this;  // Return the current object
    }
    void display() {
        cout << "The value of a is " << this->a << endl;
    }
};

int main() {
    A obj;
    obj.setData(10).setData(20).display();  // Method chaining
    return 0;
}
