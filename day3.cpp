#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int k){

for(int i=0;i<n;i++){
    if(arr[i]==k)
    return i;
}

return -1;
}

void ReverseArray(int arr[],int n){
// int temp[n],j=0;
// for(int i=n-1;i>=0;i--){
// temp[j++]=arr[i];
// }

// for(int i=0;i<n;i++){
// arr[i]=temp[i];
// }

int i=0,j=n-1;

while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

}

int SecondMax(int arr[],int n){

    int maxi=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }

     int secondmax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=maxi && arr[i] > secondmax)
        secondmax=arr[i];
    }

    return secondmax;
}

int missingNumber(int arr[],int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }

    int ans=n*(n+1)/2;

    return ans-sum;
}

void RotateArrayByOne(int arr[], int n){

int temp=arr[n-1];

for(int i=n-2;i>=0;i--){
    arr[i+1]=arr[i];
}

arr[0]=temp;

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<LinearSearch(arr,n,k)<<endl;
ReverseArray(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

cout<<SecondMax(arr,n)<<endl;

cout<<missingNumber(arr,n)<<endl;

RotateArrayByOne(arr,n);

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";


}
