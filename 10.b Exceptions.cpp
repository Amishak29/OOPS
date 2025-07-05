#include<iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for division, 2 for error code: ";
        cin >> choice;

        if (choice == 1) {
            int num1, num2;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                throw "Error: Division by zero is not allowed!";
            }
            int result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 2) {
            throw 404; // Simulating an error code exception
        }
        else {
            throw "Invalid choice!"; // Handling invalid input
        }
    }
    catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    catch (int errorCode) {
        cout << "Caught error code: " << errorCode << endl;
    }

    return 0;
}
