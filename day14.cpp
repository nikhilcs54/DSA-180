#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

int arr[1000];
vector<int>prefix(6);
for(int i=0;i<6;i++){
    cin>>arr[i];
}

prefix[0]=arr[0];

for(int i=1;i<6;i++){
    prefix[i]=prefix[i-1]+arr[i];
}

for(int i=0;i<6;i++){
   cout<<prefix[i]<<" ";
}

/* #Divide Array in 2 Equal Sum Sub-Array

int prefix=0,total_sum=0,n=arr.size();

for(int i=0;<n;i++){
total_sum+=arr[i];
}

for(int i=0;i<n;i++){
prefix+=arr[i];
if((total_sum-prefix)==prefix)
return 1;
}

return 0;
*/

//#Kadane's Algo

/*
int maxi=INT_MIN;
int prefix=0;

for(int i=0;i<n;i++){
prefix+=arr[i];
maxi=max(maxi,prefix);
if(prefix<0)
prefix=0;
}
return maxi;
*/
}