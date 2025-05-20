#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void ArraysPermutation(vector<int>&arr,vector<vector<int> >&ans,int index){

   if(index==arr.size()){
    ans.push_back(arr);
    return;
   }

   for(int i=index;i<arr.size();i++){
    swap(arr[i],arr[index]);
    ArraysPermutation(arr,ans,index+1);
    swap(arr[i],arr[index]);
   }
}

int main(){

    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    vector<vector<int> >ans;

    int index=0;

    ArraysPermutation(arr,ans,index);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}