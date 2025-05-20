#include<iostream>
using namespace std;
int ArraySum(int arr[],int n){
  int sum=0;

  for(int i=0;i<n;i++){
    sum+=arr[i];
  }

  return sum;
}

int ArrayMin(int arr[],int n){
  int min=arr[0];

  for(int i=0;i<n;i++){
    if(arr[i]<min)
    min=arr[i];
  }

  return min;
}

int ArrayMax(int arr[],int n){
  int max=arr[0];

  for(int i=0;i<n;i++){
    if(arr[i]>max)
    max=arr[i];
  }

  return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<ArraySum(arr,n)<<" "<<ArrayMax(arr,n)<<" "<<ArrayMin(arr,n);

}