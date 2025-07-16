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
        cout<<"Heya b"<<endl;    //---> this will be printed 
    }
};
int main(){
    B obj;
    obj.show();
    return 0;
}