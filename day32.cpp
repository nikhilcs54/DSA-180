#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Inc(int *num){
    *num=*num+1;
}

void Double(int *ptr){
    for(int i=0;i<5;i++){
        ptr[i]=2*ptr[i];
    }
}

void swapify(int &a,int &b){
     
     int temp=a;
     a=b;
     b=temp;

}

int main(){
    char name[]={'N','i','k','h','i','l'};
    char ch='A';
    char *p=&ch;
    char *ptr=name;
    cout<<ch<<endl;
    cout<<p<<endl;
    cout<<(void*)p<<endl;
    cout<<name<<endl;;
    cout<<&name<<endl;
    cout<<(void*)ptr<<endl;

    int num=8;
    Inc(&num);
    cout<<num<<endl;

    int arr[5]={1,2,3,4,5};
    Double(arr);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    int a=5,b=6;

    swapify(a,b);

    cout<<a<<" "<<b<<endl;
}