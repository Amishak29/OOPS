// Constructors are special member functions which are used to initialize the value of a variable inside the object.

// The constructor has the same name as the class name.
// Constructor is automatically invoked as soon as an object of its class is created.
// The constructor doesn’t have any return type.
// Constructor allows default argument concept.
// Constructor cannot be inherited 
// Constructors are always defined inside public sections. Because objects can access only the public section.
// Constructors can’t be virtual 


//Default Constructor:= A constructor having no argumnent is called default constructor.

#include <iostream>
using namespace std;
class demo{
    int a;
    public: 
    demo(){
        a=10;
    }
    int putData();
};
int demo::putData(){
    cout<<"a="<<a<<endl;
}

int main() {
    demo aa;
    int b = aa.putData();
    cout << "Returned value: " << b << endl;
    return 0;
}
