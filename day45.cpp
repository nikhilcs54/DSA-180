#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}


void quickSort(vector<int>& arr, int low, int high) {
  
     if (low < high) {
        int pi=partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr;  
    arr.push_back(8);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(5);

      
     quickSort(arr,0,5);

     for (int i=0;i<6;i++) {
        cout <<arr[i]<< " ";
    }
}
