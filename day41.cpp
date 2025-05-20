#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int CheckPallin(string str , int start, int end){

    if(start<=end){
        return 1;
    }

    if(str[start]!=str[end]){
        return -1;
    }

    return CheckPallin(str , start+1, end-1);
}

int CountVowels(string str ,int n){
    if(n==-1)
    return 0;

    if(str[n]=='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u'){
        return 1+CountVowels(str,n-1);
    }

    return CountVowels(str,n-1);
}

void Reverse(string str,int n){
    if(n==-1)
    return;

    
    cout<<str[n]<<" ";
    Reverse(str,n-1);
}

void LowerToUpper(string &str,int n){
    if(n==-1)
    {
        return;
    }

    str[n]='A'+str[n]-'a';

    LowerToUpper(str,n-1);
}
int main(){
 
 string str="nikhil";
 cout<<CheckPallin("naman",0,4)<<endl;
 cout<<CountVowels("naman",4)<<endl;
 Reverse("nikhil",5);
 cout<<endl;
 LowerToUpper(str,4);
 cout<<str<<endl;
}