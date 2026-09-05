#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int l, int r, int a[]){ // parameterized recursion
    // stop condition
    if(l >= r) 
    {
        for(int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    //task
    int c = a[l];
    a[l] = a[r];
    a[r] = c;
    // update
    reverse_arr(l+1, r-1, a);
}

void f(int i, int n, int arr[]) {
    // reversing array using single pointer
    
    // stopping condition
    if(i >= n/2){
        for(int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        return;
    }

    int c = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = c;
    f(i+1, n, arr);
}

int main() {
    // problems on recursion
    // reverse an array
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    // reverse_arr(0, n-1, arr);   
    // Remember arrays are passed by reference by default
    
    // by another methd
    f(0, n, arr);
    return 0;
}