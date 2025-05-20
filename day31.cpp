#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

//     int *ptr,a=5;

//     ptr=&a;

//     int x=*ptr++; //*(ptr++)
//     cout<<"1.x: "<<x<<endl;
//     x=*++ptr;//*(++ptr)
//     cout<<"2.x: "<<x<<endl;
//     x=++*ptr;//++(*ptr)
//     cout<<"3.x: "<<x<<endl;
//     x=(*ptr)++;//x=*ptr *ptr=*ptr+1
//     cout<<"4.x: "<<x<<endl;

//     cout<<"5.ptr: "<<ptr<<endl;
//     cout<<"6.*ptr: "<<*ptr<<endl;
//     ptr++;
//     cout<<"7.ptr: "<<ptr<<endl;
//     cout<<"8.*ptr: "<<*ptr<<endl;
//     ptr--;
//     cout<<"9.ptr: "<<ptr<<endl;
//     cout<<"10.*ptr: "<<*ptr<<endl;

//   int *ptr1,c=10;
//   cout<<c<<endl;
//   ptr1=&c;
//   cout<<ptr1<<endl;
//   cout<<*ptr1<<endl;
//   int **pptr=&ptr1;
//   cout<<pptr<<endl;
//   cout<<**pptr<<endl;

  int arr[5]={4,5,6,7,8};

  cout<<arr<<endl;

  int *ptr=arr;

  cout<<*ptr<<endl;

  ptr++;

  cout<<*ptr<<endl;

  for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<" ";
  }


}