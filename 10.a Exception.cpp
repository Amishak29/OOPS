#include<iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    
    try {
        cin >> num1 >> num2;

        // Throw an exception if num2 is zero (division by zero)
        if (num2 == 0) {
            throw "Division by zero is not allowed!";
        }

        // Perform division and print result
        int result = num1 / num2;
        cout << "The result of division is: " << result << endl;

        // Throw another exception for demo
        throw 404; // Example of throwing an integer exception

    }
    catch (const char* msg) {   //string error
        cout << "Error: " << msg << endl;
    }
    catch (int errCode) { // divide by 0 type
        cout << "Caught error code: " << errCode << endl;
    }

    return 0;
}
