#include<iostream>
using namespace std;

int* MissingAndRepeating(int arr[],int n){

for(int i=0;i<n;i++){
    arr[i]--;
}

for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
}
int* ans = new int[2];
 
 for(int i=0;i<n;i++){
    if(arr[i]/n==0)
    ans[0]=i+1;
    else if(arr[i]/n>1)
    ans[1]=i+1;
 }

 return ans;
}

int MajorityElement(int arr[],int n){
    int count=0,candidate;

    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=arr[i];
        }
        else {
            if(candidate==arr[i])
            count++;
            else
            count--;
        }
    }

    return candidate;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    // int* result = MissingAndRepeating(arr, n);
    // cout << "Missing Number: " << result[0] << endl;
    // cout << "Repeating Number: " << result[1] << endl;
    cout<< "Majority Element: "<<MajorityElement(arr,n)<<endl;

}