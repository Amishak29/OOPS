#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Parameterized constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an object of Car with parameters
    Car myCar("Toyota", "Corolla", 2020);

    // Display car information
    myCar.displayInfo();

    return 0;
}

//constructor having argument as a built in data types is called parameterized constructor