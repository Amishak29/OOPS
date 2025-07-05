#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int val) : a(val) {}
    A& operator=(const A& other) {
        if (this != &other) {  // Check for self-assignment
            this->a = other.a;
        }
        return *this;
    }
    void display() {
        cout << "The value of a is " << a << endl;
    }
};

int main() {
    A obj1(5);
    A obj2(10);
    obj1 = obj2;  // Assignment operator called
    obj1.display();  // Output: The value of a is 10
    return 0;
}
