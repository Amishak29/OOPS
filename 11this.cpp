#include <iostream>
using namespace std;

class A {
    int a;
public:
    void setData(int a) {
        a = a;  //throws garbage value hence we use
    }

    void getData() {
        cout << "The value of a is " << a << endl;
    }
};

int main() {
    A a;
    a.setData(4);  // Assign 4 to 'a'
    a.getData();   // Output: The value of a is 4

    return 0;
}
