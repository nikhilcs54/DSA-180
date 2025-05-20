#include<iostream>
using namespace std;

int BinarySearch_Dec(int arr[],int n,int key){

int start=0; int end=n-1; int mid;

while(start<=end){
    mid=(start+ (end-start)/2);

    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key)
    start=mid+1;
    else
    end=mid-1;

}

return -1;
}

int BinarySearch_Inc(int arr[],int n, int key){

int start=0; int end=n-1; int mid;

while(start<=end){
    mid=(start+ (end-start)/2);

    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
    start=mid+1;
    else
    end=mid-1;

}

return -1;
}


int main(){
int n,key;
cin>>n>>key;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(arr[0]<arr[1])
cout<<BinarySearch_Dec(arr,n,key)<<" "<<endl;
else
cout<<BinarySearch_Inc(arr,n,key)<<" "<<endl;


}