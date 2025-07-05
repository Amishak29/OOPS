#include <iostream>
using namespace std;
class Addition{
    private:
    int a, b;
    public:
        void getData(){
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
        }
        void putData(){
            cout<<"Addition"<<a+b;
        }
};
int main(){
    Addition addi;
    addi.getData();
    addi.putData();
    return 0;
}