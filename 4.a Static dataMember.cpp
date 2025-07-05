#include <iostream>
using namespace std;

class MyClass {
private:
    int a, b;         // Regular instance variables
    static int count; // Static variable shared by all instances

public:
    MyClass(int x, int y) {
        a = x;
        b = y;
        count++;  // Increment static variable count on every object creation
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << ", count = " << count << endl;
    }

    static int getCount() {//cannot access other variable if it tries to do so then function will throw error 
        return count;  // Access static variable from a static function
    }
};

// Initialize static member variable outside the class .... by default it is 0 
int MyClass::count = 0;  

int main() {
    MyClass obj1(10, 20);
    obj1.display();

    MyClass obj2(30, 40);
    obj2.display();

    cout << "Total objects created: " << MyClass::getCount() << endl;  // Access static variable through class

    return 0;
}

// STATIC DATA MEMBER 

// It is initialized to zero whenever the first object of its class is created. No other initialisation is permitted
// For making any data member static we use static keyword
// Only one copy of static data members is created and shared by all
// It’s visibility is entire program 
// USAGE= Static data members in C++ are used when a piece of data needs to be shared among all instances of a class, or when a class-level variable is required that exists independently of any object instantiation.

// STATIC MEMBER FUNCTION
// Use static data member only accessing other variable will throw error 
// Static data member or static data function both are not a part of any object
// Since it is not a part of any object it is called using class name.
