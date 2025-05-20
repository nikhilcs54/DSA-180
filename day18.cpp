#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to compute the transpose of the matrix
void PrintTranspose(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);  // Swap elements to get the transpose
        }
    }
}

// Function to rotate the matrix by 90 degrees clockwise
void Rotate90(int arr[MAX_SIZE][MAX_SIZE], int n) {
    // First transpose the matrix
    PrintTranspose(arr, n);

    // Reverse each row to complete the rotation
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

// Function to rotate the matrix by 180 degrees clockwise
void Rotate180(int arr[MAX_SIZE][MAX_SIZE], int n) {
    // Reverse each column to complete the rotation
    for (int j = 0; j < n; j++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }
    // Reverse each row to complete the rotation
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

// Function to print the matrix
void Print(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int arr[MAX_SIZE][MAX_SIZE];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    Print(arr, n);

    // Rotate the matrix by 90 degrees clockwise
    //Rotate90(arr, n);

    //cout << "Matrix after rotating 90 degrees clockwise:" << endl;
   // Print(arr, n);

     // Rotate the matrix by 180 degrees clockwise
    Rotate180(arr, n);

    cout << "Matrix after rotating 180 degrees clockwise:" << endl;
    Print(arr, n);

    return 0;
}
