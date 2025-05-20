#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

string longestPrefix(string s) {
        
        vector<int>LPS(s.size(),0);
        int prefix=0,suffix=1;

        while(suffix<s.size()){
            if(s[prefix]==s[suffix]){
                LPS[suffix]=prefix+1;
                prefix++,suffix++;

            }
            else{
                if(prefix==0){
                    LPS[suffix]=0;
                    suffix++;
                }
                else{
                    prefix=LPS[prefix-1];
                }
            }
        }

        return s.substr(0,LPS[s.size()-1]);
    }
int main(){
    string str1;
    cin>>str1;


    cout<<"Longest Prefix Suffix is: "<<longestPrefix(str1)<<endl;
}