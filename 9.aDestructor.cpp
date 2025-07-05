#include<iostream>
using namespace std;

int Count = 0;

class demo {
public:
    demo() {
        Count++;
        cout << "No. of object created " << Count << endl;
    }
    ~demo() {
        Count--;
        cout << "No. of object destroyed " << Count << endl;
    }
};

int main() {
    demo aa, bb, cc; // Three objects are created here
    {
        demo dd; //out of above scope 
    }                  // One more object is created here
    return 0;           // Objects are destroyed here
}

// No. of object created 1
// No. of object created 2
// No. of object created 3
// No. of object created 4
// No. of object destroyed 3
// No. of object destroyed 2
// No. of object destroyed 1
// No. of object destroyed 0
