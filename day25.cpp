#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int Num(char c){
        if(c=='I')
        return 1;
        else if(c=='V')
        return 5;
        else if(c=='X')
        return 10;
        else if(c=='L')
        return 50;
        else if(c=='C')
        return 100;
        else if(c=='D')
        return 500;
        else
        return 1000;
    }
    int romanToInt(string s) {
      
      int sum=0,index=0;
      while(index<s.size()-1){
        if(Num(s[index])<Num(s[index+1])){
            sum=sum+(-Num(s[index]));
        }
        else{
            sum+=Num(s[index]);
        }
        index++;
      }

      sum+=Num(s[s.size()-1]);

      return sum;
    }
int main(){
    string str1;
    cin>>str1;


    cout<<"The Number is "<<romanToInt(str1)<<endl;
}