#include<iostream>
using namespace std;
class Addition{
    int a, b;
    public:
    void getData();
    friend int sum(Addition);  //doesn't need object to access it (passing class Argument that is addition)
};
void Addition::getData(){
    cin>>a>>b;
}
int sum(Addition aa){  // 
    return aa.a+aa.b;
}
int main(){
    Addition aa;
    aa.getData();
    cout<<"Addition"<<sum(aa)<<endl;
}
// A friend function cannot be called using the object of a friend class. It behaves normally so it is called normally like other functions.
// A friend function can use the resources of the class only using the object of the same class.
// Usually a friend function has an argument as an object.
