#include<iostream>
using namespace std;

void InsertionSort_Dec(int arr[],int n){

for(int i=1;i<n;i++){

    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
        else
        break;
    }
}
}

void InsertionSort_Inc(int arr[],int n){

for(int i=1;i<n;i++){

    for(int j=i;j>0;j--){
        if(arr[j]>arr[j-1])
        swap(arr[j],arr[j-1]);
        else
        break;
    }
}
}

void PrintArray(int arr[],int n){

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

InsertionSort_Dec(arr,n);

PrintArray(arr,n);

InsertionSort_Inc(arr,n);

PrintArray(arr,n);

}