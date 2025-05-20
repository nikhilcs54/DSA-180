#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int longestPalindrome(string s) {
        vector<int>lower(26,0),upper(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i]>='a')
            lower[s[i]-'a']++;
            else
            upper[s[i]-'A']++;
        }

        int count=0;
        bool odd=0;

        for(int i=0;i<26;i++){
            if(lower[i]%2==0)
            count+=lower[i];
            else{
                count+=lower[i]-1;
                odd=1;
            }
            if(upper[i]%2==0)
            count+=upper[i];
            else{
                count+=upper[i]-1;
                odd=1;
            }
        }

        return count+odd;
    }

   string sortSentence(string s) {
        vector<string>ans(10);
        string temp="";
        int index=0,count=0;

        while(index<s.size()){
            if(s[index]==' '){
                int pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
            }
            else{
                temp+=s[index];
                }
            index++;
        }

        int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;

        for(int i=1;i<=count;i++){
            temp+=ans[i];
            temp+=" ";
        }

        temp.pop_back();

        return temp;
    }
int main(){
    string str1,str2;

    getline(cin,str1);
    getline(cin,str2);


    cout<<"Longest Palindrome: "<<longestPalindrome(str1)<<endl;
    cout<<"Sorted Sentence: "<<sortSentence(str2) <<endl;
}