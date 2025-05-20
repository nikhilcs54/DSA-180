#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


int BinarySearch(int arr[MAX_SIZE][MAX_SIZE], int n,int k) {
   int start=0,end=(n*n)-1,mid;

   while(start<=end){
    mid=start+(end-start)/2;
    int row_index=mid/4;
    int col_index=mid%4;

    if(arr[row_index][col_index]==k)
    return 1;
    else if(arr[row_index][col_index]<k)
    start=mid+1;
    else
    end=mid-1;
   }

   return 0;
}

int SearchinSortedRow_Col(int arr[MAX_SIZE][MAX_SIZE], int n,int k) {
   int row=0,col=n-1;

   while(row<n && col>=0){
    if(arr[row][col]==k)
    return 1;
    else if(arr[row][col]<k)
    row++;
    else
    col--;
   }

   return 0;
}


int main() {
    int n,k;
    cout << "Enter the size of the matrix (n x n): ";
    cin >>n>>k;

    int arr[MAX_SIZE][MAX_SIZE];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    

    cout<<SearchinSortedRow_Col(arr,n,k)<<" ";


    return 0;
}
