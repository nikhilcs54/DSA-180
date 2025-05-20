#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

string defangIPaddr(string address) {
        
        string ans;

        int index=0;

        while(index<address.size()){
            if(address[index]=='.')
            ans+="[.]";
            else
            ans+=address[index];

            index++;
        }

        return ans;
    }

    void sortclockwise(string &str){
        
        char ch=str[str.size()-1];
        int index=str.size()-2;
        
        while(index>=0){
            str[index+1]=str[index];
            index--;
        }
        
        str[0]=ch;
    }
    
    void sortanticlockwise(string &str){
        char ch=str[0];
        int index=1;
        
        while(index<str.size()){
            str[index-1]=str[index];
            index++;
        }
        
        str[str.size()-1]=ch;
    }

    bool isRotated(string& s1, string& s2) {
        // Your code here
        
       string clockwise,anticlockwise;
       
       clockwise=s1;
       
       sortclockwise(clockwise);
       
       sortclockwise(clockwise);
       
       if(clockwise==s2)
       return true;
       
       anticlockwise=s1;
       
       sortanticlockwise(anticlockwise);
       
       sortanticlockwise(anticlockwise);
       
       if(anticlockwise==s2)
       return true;
        
        return false;
    }

    bool checkIfPangram(string sentence) {
        vector<int>alpha(26,0);

        for(int i=0;i<sentence.size();i++){
            alpha[sentence[i]-'a']++;
        }

        for(int i=0;i<26;i++){
           if(alpha[i]==0)
           return false;
        }

        return true;
    }

    string stringsort(string s){
    //complete the function here
    
    vector<int>alpha(26,0);
    
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    
    string ans;
    for(int i=0;i<26;i++){
        char ch='a'+i;
        
        while(alpha[i]){
            ans+=ch;
            alpha[i]--;
        }
    }
    
    return ans;
    
}
int main(){
    string str1,str2;

    cin>>str1>>str2;

    //cout<<"Defang IP Add: "<<defangIPaddr(str1)<<endl;
    cout<<"is Rotated?: "<<isRotated(str1,str2)<<endl;
    cout<<"is Panagram?: "<<checkIfPangram(str1)<<endl;
    cout<<"The Sorted String is: "<<stringsort(str1)<<endl;
}