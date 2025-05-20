#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int LinearSearch(int arr[],int n,int x){
    if(arr[n]==x)
    return 1;

    if(n==-1)
    return 0;

    return LinearSearch(arr,n-1,x);
}

int BinaySearch(int arr[],int x,int left,int right){
    
    int mid=left+(right-left)/2;

    if(left>right)
    return 0;

    else if(arr[mid]==x)
    return 1;
     
    else if(arr[mid]<x)
    return BinaySearch(arr,x,mid+1,right);

    else
    return BinaySearch(arr,x,left,right-1);

}

int main(){
    int arr[6]={8,3,4,9,7,5};
    int brr[6]={3,4,5,7,8,9};
    cout<<LinearSearch(arr,5,2)<<endl;
    cout<<BinaySearch(brr,4,0,5)<<endl;

}