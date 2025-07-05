#include <iostream>
using namespace std;
class Addition{
    private:
    int a, b;
    public:
    void getData();
    void putData();
};

void Addition::getData(){
    cout<<"Enter two number";
    cin>>a>>b;
}
void Addition::putData(){
    cout<<"Sum:"<<a+b<<endl;
}
int main(){
    Addition obj;
    obj.getData();
    obj.putData();
}