#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Print(int arr[],int n){
    
    if(n==-1)
    return;
     
    Print(arr,n-1);
    cout<<arr[n]<<" ";
    
}

void PrintReverse(int arr[],int n){
    
    if(n==-1)
    return;
     
    cout<<arr[n]<<" ";
    Print(arr,n-1);
    
}

int SumArray(int brr[],int n){
    if(n==0)
    return brr[0];

    return brr[n]+SumArray(brr,n-1);
}

int MinEle(int arr[],int n){
    if(n==0)
    return arr[0];

    return min(arr[n],MinEle(arr,n-1));
}

int main(){

    int arr[5]={3,7,8,6,4};
    int brr[5]={1,2,3,4,5};
    Print(arr,4);
    cout<<endl;
    PrintReverse(arr,4);
    cout<<endl;
    cout<<SumArray(brr,4)<<endl;
    cout<<MinEle(arr,4)<<endl;
}