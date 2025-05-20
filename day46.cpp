#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subsequence(vector<int>& nums,int index,int n,vector<vector<int> >&ans,vector<int>temp){
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }

    subsequence(nums,index+1,n,ans,temp);
    temp.push_back(nums[index]);
    subsequence(nums,index+1,n,ans,temp);

   }

   void parantheses(int n,int l,int r,vector<string>&ans,string &temp){

        if(l+r==2*n){
            ans.push_back(temp);
            return;
        }
        if(l<n){
            temp.push_back('(');
            parantheses(n,l+1,r,ans,temp);
            temp.pop_back();
        }
        if(r<l){
            temp.push_back(')');
            parantheses(n,l,r+1,ans,temp);
            temp.pop_back();
        }
   }

int main(){
    vector<int> arr;  
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<vector<int> >ans;
    vector<int>temp;
    int index=0;

    subsequence(arr,index,arr.size(),ans,temp);

    for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
    int n=3,l=0,r=0;
    vector<string>ans1;
    string temp1;
    parantheses(n,l,r,ans1,temp1);

    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
}