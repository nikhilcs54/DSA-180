#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int minChar(string& s) {
        // Write your code here
        string rev=s;
        reverse(rev.begin(),rev.end());
        int size=s.size();
        s+='$';
        s+=rev;
        
        int n=s.size();
        
        vector<int>LPS(n,0);
        
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
        
        return size-LPS[n-1];
        
    }
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

    int KMP_Search(string heystack, string needle) {
        
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

    return second==needle.size()?1:-1;
    }
    int repeatedStringMatch(string a, string b) {
        
        if(a==b)
        return 1;

        int repeat=1;

        string temp=a;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        
         if(KMP_Search(temp,b)==1)
         return repeat;

         if(KMP_Search(temp+a,b)==1)
         return repeat+1;

         return -1;

    }
    

int main(){
    string str,str1,str2;
    cin>>str>>str1>>str2;


    cout<<"The minimum character needed is: "<<minChar(str)<<endl;

    cout<<"Repeated String Match is: "<<repeatedStringMatch(str1, str2)<<endl;
}