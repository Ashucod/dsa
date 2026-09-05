#include<bits/stdc++.h>
using namespace std;

int main() {
    // Maximum subarray sum

    // what is a subarray?
    // continuous part of an array is called a subarray. it may be a single element or may be continuous 2 to even a whole array
    // how to get subarray or how to print them

    int a[] = {1,2,3,4,5};
    int n = 5;

    // for(int start = 0; start < n; start++) {
    //     for(int end = start; end < n; end++) {
    //         for(int i = start;  i <= end; i++) {
    //             cout << a[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // } // TC : O(n^3)

    // so now the question was maximum subarray sum ie which subarray has maximum sum

    // so we use here brute-force methos but the time-complexity would be optimized to O(n^2)
    // since the second loop one with the end as its counter variable pointing to the end value, we will just add the end element to the previous sum and not find the sum by always adding all those numbers

    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++) {
        int currentSum = 0;
        for(int end = start; end < n; end++) {
            currentSum += a[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Maximum subarray sum : " << maxSum << endl;


    return 0;
} 