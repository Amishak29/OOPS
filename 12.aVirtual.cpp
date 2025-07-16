#include <iostream>
using namespace std;
class A{
    public:
    void show(){   //What if we use virtual here? what will be the output?
        cout<<"Heya A"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"Heya b"<<endl;    //---> this will be printed 
    }
};

int main(){
    A *bptr;
    B aa;              // using derived class ptr we call base call i.e. A
    bptr=&aa;
    bptr->show();
    return 0;
}