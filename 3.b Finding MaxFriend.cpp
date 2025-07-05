#include <iostream>
using namespace std;

class MaxFindB; // Forward declaration

class MaximumFindA {
private:
    int a;
public:
    void getDataA() {
        cout << "Enter A" << endl;
        cin >> a;
    }
    friend int Total_Maxi(MaximumFindA, MaxFindB);
};

class MaxFindB {
private:
    int b;
public:
    void getDataB() {
        cout << "Enter B" << endl;
        cin >> b;
    }
    friend int Total_Maxi(MaximumFindA, MaxFindB);
};

int Total_Maxi(MaximumFindA aa, MaxFindB bb) {
    if (aa.a > bb.b) {
        return aa.a;
    } else {
        return bb.b;
    }
}

int main() {
    MaximumFindA aa;
    MaxFindB bb;

    aa.getDataA();
    bb.getDataB();

    cout << "The bigger is: " << Total_Maxi(aa, bb) << endl;
    return 0;
}