#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int PredictTheWinner(int n,int k){
    if(n==1)
    return 0;

    return (PredictTheWinner(n-1,k)+k)%n;
}
int main(){
     cout<<PredictTheWinner(5,2)<<endl;
}