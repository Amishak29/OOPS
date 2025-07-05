#include <iostream>

using namespace std;

class my3 {
    int a, b;

public:
    void getdata() {
        cout << "\nEnter Two Numbers: ";
        cin >> a >> b;
    }

    void putdata() {
        cout << "\na = " << a << "\tb = " << b;
    }
};

int main() {
    my3 aa[5];
    int i;

    for (i = 0; i < 5; i++) {
        aa[i].getdata();
    }

    for (i = 0; i < 5; i++) {
        aa[i].putdata();
    }

    return 0;
}
