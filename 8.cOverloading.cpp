#include <iostream>
using namespace std;

class Box {
    double length, breadth, height;

public:
    // Default Constructor
    Box() {
        length = breadth = height = 0;
    }

    // Parameterized Constructor
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    // Display function
    void display() const { //void display() const), it means that this function does not modify any member variables of the class.
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main() {
    Box box1;               // Default Constructor
    Box box2(5, 3, 2);      // Parameterized Constructor
    Box box3 = box2;        // Copy Constructor

    box1.display();
    box2.display();
    box3.display();

    return 0;
}
