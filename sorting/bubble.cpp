#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    // push the max element to the last by adjacent swaps
    for(int j = 0; j < n-1; j++) {
        for(int i = 0; i <= n-2; i++) {
            int didSwap = 0; // for optimisation in best case scenario
            if(arr[i] > arr[i+1])
            {
                int c = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = c;
                didSwap = 1; // checks if swap happened or not
            }
            if(didSwap == 0) break; // if swap didnt happen then it exits giving TC as O(N)
        }
    } // General TC : O(N^2) - worst case
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    cout << endl;
    
    return 0;
}