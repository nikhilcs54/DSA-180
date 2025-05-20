#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

 void find(int n,vector<string>&ans,string &temp,int zero,int one){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back('1');
        find(n,ans,temp,zero,one+1);
        temp.pop_back();
        
        if(zero<one){
            temp.push_back('0');
            find(n,ans,temp,zero+1,one);
            temp.pop_back();
        }
        
        
    }
int main(){
    int n=3;

    vector<string>result;
    string temp;
find(n,result,temp,0,0);
for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;

}