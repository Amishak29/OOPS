#include <iostream>
using namespace std;

class A {
public:
    static void staticMethod() {
        // this->a = 10;  // Error! Cannot use 'this' in a static method
    }
};

int main() {
    A::staticMethod();
    return 0;
}
