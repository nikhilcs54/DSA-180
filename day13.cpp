#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0,end=n-1;

    while(start<end){
        if(arr[start]==0)
        start++;
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//# 2 SUM

/*

vector<int> twoSum(vector<int>& arr, int target) {

        vector<int>ans;

        int n=arr.size(),start=0,end=n-1;

        while(start<end){
            if(arr[start]+arr[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }

            else if(arr[start]+arr[end]<target)
            start++;
            else
            end--;
        }
        
        return ans;
    }
*/

//#Pair Difference 

/*
int Solution::solve(vector<int> &A, int B) {
    
    int start=0,end=1,n=A.size();
    
    sort(A.begin(),A.end());
    if(B<0)
    B=B*-1;
    
    while(end<n){
        if(A[end]-A[start]==B)
        return 1;
        else if(A[end]-A[start]<B)
        end++;
        else
        start++;
        if(start==end)
        end++;
    }
    
    return 0;
}

*/