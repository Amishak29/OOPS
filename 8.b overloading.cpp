#include <iostream>
using namespace std;

class Box {
public:
    Box(int l = 0) {
        cout << "Length: " << l << ", Breadth: " << l << ", Height: " << l << endl;
    }

    Box(double l, double b) {
        cout << "Length: " << l << ", Breadth: " << b << ", Height: " << l << endl;
    }
    
    Box(double l, double b, double h) {
        cout << "Length: " << l << ", Breadth: " << b << ", Height: " << h << endl;
    }
};

int main() {
    Box(), Box(5), Box(2.5, 3.5), Box(2.5, 3.5, 4.5);  // Different types

    return 0;
}
