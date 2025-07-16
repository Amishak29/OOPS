#include <iostream>
using namespace std;

class demo {
    int a; // Declare an integer variable to store the value

public:
    // Function to input the value of 'a'
    void getdata() {
        cout << "Enter a No: ";
        cin >> a;
    }

    // Function to output the value of 'a'
    void putdata() {
        cout << "Value = " << a << endl;
    }

    // Overload the + operator to add two 'demo' objects
    demo operator+(demo bb) {
        demo cc;            // Create a new demo object to hold the result
        cc.a = a + bb.a;    // Add the values of the two objects
        return cc;          // Return the result object
    }
};

int main() {
    demo aa, bb, cc;

    aa.getdata();   // Input for first object
    bb.getdata();   // Input for second object

    cc = aa + bb;   // Using overloaded + operator to add aa and bb

    aa.putdata();   // Display value of first object
    bb.putdata();   // Display value of second object
    cc.putdata();   // Display value of the result object

    return 0;
}
