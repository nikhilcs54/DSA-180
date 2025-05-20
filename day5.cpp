#include<iostream>
using namespace std;

void SelectionSort_Dec(char arr[],int n){

for(int i=0;i<n-1;i++){

    //current element
    int index=i;

//find the minimum
    for(int j=i+1;j<n;j++){
        if((int)arr[j]<(int)arr[index])
        index=j;
    }
//swap the curr and min
    swap(arr[index],arr[i]);
}
}

void SelectionSort_Inc(char arr[],int n){

for(int i=0;i<n-1;i++){

    //current element
    int index=i;

//find the maximum
    for(int j=i+1;j<n;j++){
        if((int)arr[j]>(int)arr[index])
        index=j;
    }
//swap the curr and max
    swap(arr[index],arr[i]);
}
}

void PrintArray(char arr[],int n){

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int n;
cin>>n;
char arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

SelectionSort_Dec(arr,n);

PrintArray(arr,n);

SelectionSort_Inc(arr,n);

PrintArray(arr,n);

}