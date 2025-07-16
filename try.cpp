// #include <iostream>
// using namespace std;
// int amisha=10;

// int main(){
//     int *ptr=&amisha;
//    int amisha=20;
//     cout<<amisha<<endl;;
//     cout<<*ptr<<endl;
// }
#include<iostream>
using namespace std;

int a=10;
int main()
{
    // a=20;
    int a=100;
    cout<<a<<endl; 
    cout<<::a<<endl; //calls global variable
    return 0;
}