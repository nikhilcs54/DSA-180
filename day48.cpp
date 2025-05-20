#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int perfectSum(int arr[],int index,int n,int sum){
    if(index==n){
        return sum==0;
    }

    return perfectSum(arr,index+1,n,sum)+perfectSum(arr,index+1,n,sum-arr[index]);
}

int targetSum(int arr[],int index,int n,int target){
    if(target==0){
        return 1;
    }

    if(index==n || target<0){
        return 0;
    }

    return targetSum(arr,index+1,n,target)+targetSum(arr,index,n,target-arr[index]);
}
int main(){
    int arr[6]={5,2,3,10,6,8};
    int brr[3]={1,2,3};
    int sum=10,target=6;
    int index=0;
    int n=6;


    cout<<perfectSum(arr,index,n,sum)<<endl;

    cout<<targetSum(arr,index,n,target)<<endl;


}