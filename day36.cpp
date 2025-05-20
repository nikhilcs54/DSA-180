#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintNto1(int n){

  if(n==1){
    cout<<n<<" "<<endl;
    return;
  }
  cout<<n<<" ";
  PrintNto1(n-1);
}

void PrintEven(int n){
 if(n==2){
    cout<<n<<" "<<endl;
    return;
  }
  cout<<n<<" ";
  PrintEven(n-2);
}

void PrintBirthday(int n){
 if(n==0){
    cout<<" Happy Birthday"<<endl;;
    return;
  }
  cout<<n<<" days left for birthday"<<endl;;
  PrintBirthday(n-1);
}

int main(){
int n;
cin>>n;

PrintBirthday(n);
PrintEven(n);
PrintNto1(n);
}