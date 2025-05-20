#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int Fibbonaci(int n){
    if(n<=1)
    return n;

    return Fibbonaci(n-1)+Fibbonaci(n-2);
}

int GCD(int a,int b){
    if(b==0)
    return a;

    return GCD(b,a%b);

}
int main(){
cout<<Fibbonaci(8)<<" "<<endl;
cout<<GCD(18,48)<<" "<<endl;
}