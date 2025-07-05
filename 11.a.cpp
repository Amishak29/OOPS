#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int a) {
        this->a = a;  // Using this pointer to refer to the member variable
    }
    void display() {
        cout << "The value of a is " << this->a << endl; // Accessing member variable using this
    }
};

int main() {
    A obj(5);
    obj.display();  // Output: The value of a is 5
    return 0;
}
