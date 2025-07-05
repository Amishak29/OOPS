#include <iostream>
#include <climits>
using namespace std;

class Prob {
    int n;
    int arr[100];  

public:
    void putData();
    void getMax();
    void getMin();
};

void Prob::putData() {
    cin >> n;
    if (n > 100) {
        cout << "Array size exceeds limit!" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void Prob::getMax() {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout << "Max: " << maxi << endl;
}

void Prob::getMin() {
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    cout << "Min: " << mini << endl;
}

int main() {
    Prob obj;
    obj.putData();
    obj.getMax();
    obj.getMin();
    return 0;
}
