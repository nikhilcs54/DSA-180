#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subsetSum(int arr[],int index,int n,int sum,vector<int>&temp){

if(index==n){
    //cout<<sum<<endl;
    temp.push_back(sum);
    return;
}

subsetSum(arr,index+1,n,sum,temp);
subsetSum(arr,index+1,n,sum+arr[index],temp);

}

bool targetSum(int arr[],int index,int n,int target){
    if(target==0)
    return 1;
    if(index==n || target<0)
    return 0;

    return targetSum(arr,index+1,n,target) || targetSum(arr,index+1,n,target-arr[index]);
}
int main(){
    int arr[3]={1,2,3};
    int brr[3]={1,2,3};
    int target=4;
    vector<int>temp;
    int index=0;
    int n=3;
    int sum=0;

    subsetSum(arr,index,n,sum,temp);

    cout<<targetSum(arr,index,n,target)<<endl;

    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }


}