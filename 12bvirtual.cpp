#include <iostream>
using namespace std;
class A{
    public:
    void show(){   
        cout<<"Heya A"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"Heya b"<<endl;    
    }
};

int main(){
    A *bptr;
    B aa;              // using derived class ptr we call base call i.e. A
    bptr=&aa;
    bptr->show();
    return 0;
}

// output is A 