#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[i]) {
                int c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;
            }
        }
    }
}

int main() {
    // In selection sort we find smallest element and put it to the beginning
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n); // remember arrays are passed by reference

    // printing sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}