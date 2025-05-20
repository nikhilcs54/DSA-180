#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void longestPrefixSuffix(vector<int>&LPS,string &s) {
        // Your code goes here
        
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

    }

    int strStr(string heystack, string needle) {
        
        vector<int>LPS(needle.size(),0);
        longestPrefixSuffix(LPS,needle);

        int first=0,second=0;

        while(second<needle.size() && first<heystack.size()){
            if(needle[second]==heystack[first]){
                first++;
                second++;
            }

            else{
                if(second==0){
                    first++;
                }
                else{
                    second=LPS[second-1];
                }
            }
        }

    return second==needle.size()?first-second:-1;
    }

int main(){
    string str1,str2;
    cin>>str1>>str2;


    cout<<"The First Occurence is: "<<strStr(str1, str2)<<endl;
}