#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int *ptr1,a=10;
    int *ptr2,b=30;

    ptr1=&a;
    ptr2=&b;

    cout<<"1.The a is: "<<a<<endl;
    cout<<"2.The &a is: "<<&a<<endl;
    cout<<"3.The *(&a) is: "<<*(&a)<<endl;
    cout<<"4.The b is: "<<b<<endl;
    cout<<"5.The &b is: "<<&b<<endl;
    cout<<"6.The *(&b) is: "<<*(&b)<<endl;
    cout<<"7.The ptr1 is: "<<ptr1<<endl;
    cout<<"8.The *ptr1 is: "<<*ptr1<<endl;
    cout<<"9.The ptr2 is: "<<ptr2<<endl;
    cout<<"10.The *ptr2 is: "<<*ptr2<<endl;
}