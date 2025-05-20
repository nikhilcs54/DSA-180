#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Print1toN(int n){

  if(n==1){
    cout<<n<<" ";
    return;
  }
  Print1toN(n-1);
  cout<<n<<" ";
  
}

void Print1toNWithArgs(int num,int n){

  if(num==n){
    cout<<n<<" ";
    return;
  }
  cout<<num<<" ";
  Print1toNWithArgs(num+1,n);
  
  
}

void PrintEven(int n){
 if(n==2){
    cout<<n<<" ";
    return;
  }
  PrintEven(n-2);
  cout<<n<<" ";
  
}

void PrintEvenWithArgs(int num,int n){
 if(num>n){
    return;
  }
  cout<<num<<" ";
  PrintEvenWithArgs(num+2,n);
  
}

int main(){
int n;
cin>>n;

PrintEven(n);
cout<<endl;
Print1toN(n);
cout<<endl;
Print1toNWithArgs(1,n);
cout<<endl;
PrintEvenWithArgs(2,n);
}