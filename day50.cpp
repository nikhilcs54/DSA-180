#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void ArraysPermutationWithRepetition(vector<int>& arr, vector<vector<int> >& ans, int index) {
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    vector<bool> used(21, 0); 
    for (int i = index; i < arr.size(); i++) {
        if (used[arr[i] + 10] == 0) { 
            used[arr[i] + 10] = 1;  
            swap(arr[i], arr[index]);
            ArraysPermutationWithRepetition(arr, ans, index + 1);
            swap(arr[i], arr[index]); 
        }
    }
}

int NumberOfWays(int brr[], int n,int sum){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }

    int ans=0;

    for(int i=0;i<n;i++){
        ans+=NumberOfWays(brr,n,sum-brr[i]);
    }

    return ans;
}


int main(){

    vector<int>arr;
    int brr[3]={1,5,6};
    int sum=7;
    int n=3;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);

    vector<vector<int> >ans;

    int index=0;

    ArraysPermutationWithRepetition(arr,ans,index);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<NumberOfWays(brr,3,7)<<endl;
}