#include<bits/stdc++.h>
using namespace std;

int sum_arr(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int arr[n];
        int maxsum, s;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        
        while(k--) {
            int start = arr[0], end = arr[n-1];
            if((sum_arr(arr, n) - start) < (sum_arr(arr, n) - end)){
                // remove start
                int N = n-1;
                for(int i = 0; i < N; i++) {
                    arr[i] = arr[i+1];
                    arr[N] = 0;
                }
            } else {
                // remove end
                int N = --n;
                for(int i = 0; i < N; i++) {
                    arr[i] = arr[i];
                    arr[N] = 0;
                }
            }
        }

        int final_sum = sum_arr(arr, n);
        cout << final_sum << endl;
    }
}