#include <iostream>
using namespace std;

class Box {
public:
    Box(double l = 0) {
        cout << "Length: " << l << ", Breadth: " << l << ", Height: " << l << endl;
    }
};

int main() {
    Box(), Box(5), Box(2, 3, 4);  // Implicit handling of arguments

    return 0;
}
