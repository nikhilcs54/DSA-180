#include<iostream>
using namespace std;

void BubbleSort_Dec(int arr[],int n){

for(int i=n-2;i>=0;i--){

    
    bool swapped=0;


    for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=1;
        }
    }

    if(swapped==0)
    break;
}
}

void BubbleSort_Inc(int arr[],int n){

for(int i=n-2;i>=0;i--){

    
    bool swapped=0;


    for(int j=0;j<=i;j++){
        if(arr[j]<arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=1;
        }
    }

    if(swapped==0)
    break;
}
}

void BubbleSort(int arr[],int n){

for(int i=n-1;i>=0;i--){

    
    bool swapped=0;


    for(int j=i;j>=1;j--){
        if(arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            swapped=1;
        }
    }

    if(swapped==0)
    break;
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

BubbleSort_Dec(arr,n);

PrintArray(arr,n);

BubbleSort_Inc(arr,n);

PrintArray(arr,n);

BubbleSort(arr,n);

PrintArray(arr,n);

}