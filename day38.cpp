#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int Fact(int n){
    if(n<=1)
    return 1;

    return n*Fact(n-1);
}

int Sum1toN(int n){
if(n==1)
return 1;

return n+Sum1toN(n-1);
}

int POW2(int num,int n){
      if(n==1)
      return num;

      return num*POW2(num,n-1);
}

int SumSquare(int n){
    if(n==1)
    return 1;

    return n*n+SumSquare(n-1);
}
int main(){
    
    cout<<Fact(5)<<" "<<endl;
    cout<<Sum1toN(5)<<" "<<endl;
    cout<<POW2(2,5)<<" "<<endl;
    cout<<SumSquare(5)<<" "<<endl;
}