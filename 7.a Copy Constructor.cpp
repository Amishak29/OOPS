#include <iostream>
using namespace std;

class copyCon {
    int a;
public:
    copyCon() {
        a = 10;
    }

    copyCon(copyCon &z) { // Copy constructor
        a = z.a;
    }

    void putData() {
        cout << "a = " << a << endl;
    }
};

int main() {
    copyCon aa;       // default constructor
    copyCon bb(aa);   // copy constructor
    copyCon cc = bb;  // copy constructor again
    aa.putData();
    bb.putData();
    cc.putData();  
}