#include <iostream>
using namespace std;

class Classroom {
public:
    int students[3]; // Array inside the class

    void setData() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter student " << i + 1 << " marks: ";
            cin >> students[i]; 
        }
    }

    void displayData() {
        for (int i = 0; i < 3; i++) {
            cout << "Student " << i + 1 << " marks: " << students[i] << endl; 
        }
    }
};

int main() {
    Classroom myClass;

    myClass.setData();
    myClass.displayData();

    return 0;
}
