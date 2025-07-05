#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int a) {
        // 'this->a' refers to the instance variable, 'a' refers to the parameter
        this->a = a;  // Setting the member variable 'a' to the parameter value
    }
    void print() {
        cout << "The value of a is " << this->a << endl;
    }
};

int main() {
    A obj(10);  // Initialize with 10
    obj.print();  // Output: The value of a is 10
    return 0;
}
