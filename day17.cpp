#include <iostream>
#include<algorithm>
using namespace std;


const int MAX_SIZE = 100;


void PrintTranspose(int arr[MAX_SIZE][MAX_SIZE], int m, int n) {
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a=arr[i][j];
            int b=arr[j][i];
            int temp=a;
            a=b;
            b=temp;
            arr[i][j]=a;
            arr[j][i]=b;
        }
        }

        for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void PrintSpiral(int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
    int top = 0, right = n - 1, bottom = m - 1, left = 0,k=0;
     int ans[m*n];
        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int j = left; j <= right; j++) {
                ans[k++]=matrix[top][j];
            }
            top++;

            // Traverse from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans[k++]=matrix[i][right];
            }
            right--;

            // Traverse from right to left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans[k++]=matrix[bottom][j];
                }
                bottom--;
            }

            // Traverse from bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[k++]=matrix[i][left];
                }
                left++;
            }
        }


        for (int i = 0; i < m*n; i++)
            cout<<ans[i]<<" ";
}

int main() {
    int m, n;
    cin >> m >> n;

    int arr[MAX_SIZE][MAX_SIZE];

   cout<<"Enter the Array"<<" "<<endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout<<"Print the Transpose Array"<<endl;

    PrintTranspose(arr, m, n);
cout<<"Print the Spiral Array"<<endl;
    PrintSpiral(arr, m, n);

     
}

