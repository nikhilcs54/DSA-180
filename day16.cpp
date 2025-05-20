#include <iostream>
using namespace std;


const int MAX_SIZE = 100;


void Print(int arr[MAX_SIZE][MAX_SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void PrintMax(int arr[MAX_SIZE][MAX_SIZE], int m, int n) {
    int maxm=INT_MIN,res=-1;
    for (int i = 0; i < m; i++) {
        int total=0;
        for (int j = 0; j < n; j++) {
            total+=arr[i][j];
        }
        if(maxm<total)
        {
            maxm=total;
            res=i;
        }
    }

    cout<<res<<" "<<endl;
}

void PrintDiagonalSum(int arr[MAX_SIZE][MAX_SIZE], int m, int n) {
    
    int i=0,first=0,j=n-1,second=0;

    while(i<m){
        first+=arr[i][i];
        i++;
    }

    i=0;
    while(j>=0){
        second+=arr[i][j];
        i++;
        j--;
    }

    cout<<first<<" "<<second<<" "<<endl;
}

int Search(int arr[MAX_SIZE][MAX_SIZE], int m, int n,int target) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j]==target)
            return i;
        }
    }

    return -1;
}

void Add(int arr[MAX_SIZE][MAX_SIZE],int brr[MAX_SIZE][MAX_SIZE], int m, int n) {

    int ans[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j]=arr[i][j]+brr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}


void ReverseRow(int arr[MAX_SIZE][MAX_SIZE],int m, int n){
   
   for(int i=0;i<m;i++){
    int start=0,end=n-1;

    while(start<end){
        swap(arr[i][start],arr[i][end]);
        start++;
        end--;
    }
   }
}

int main() {
    int m, n;
    cin >> m >> n;

    int arr[MAX_SIZE][MAX_SIZE],brr[MAX_SIZE][MAX_SIZE];

   cout<<"Enter the first Array"<<" "<<endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

cout<<"Enter the second Array"<<" "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> brr[i][j];
        }
    }

   cout<<"Print the 2-D Array"<<endl;
    Print(arr, m, n);

    int target=9;

 cout<<"Search target in the 2-D Array"<<endl;
    cout<<Search(arr,m,n,target)<<" "<<endl;

//brr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};

cout<<"Add two 2-D Array"<<" "<<endl;

Add(arr,brr,m,n);

cout<<"PrintMax the 2-D Array"<<" "<<endl;
    PrintMax(arr, m, n);

cout<<"PrintDiagonalSum in the 2-D Array"<<" "<<endl;
    PrintDiagonalSum(arr, m, n);

cout<<"ReverseRow in the 2-D Array"<<" "<<endl;
    ReverseRow(arr, m, n);

cout<<"Print the 2-D Array"<<endl;
    Print(arr, m, n);

}

