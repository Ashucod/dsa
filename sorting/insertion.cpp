#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]) {
                int c = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = c;
            } else break;
            // cout << "Runs" << endl;
            // the upper line is just to see and understand how many times does our loop repeats
            // because if the else break; statement wasnt there the loop would have repeated unnecessarily to compare sorted array and taking more time
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}