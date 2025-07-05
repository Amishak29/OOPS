#include <iostream>
using namespace std;
class demo{
    int a;
    public: 
    demo();
    int putData();
};
demo::demo(){
    a=10;
}
int demo::putData(){
    cout<<"a="<<a<<endl;
}

int main() {
    demo aa;
    int b = aa.putData();
    cout << "Returned value: " << b << endl;
    return 0;
}
