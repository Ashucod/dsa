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

int main() {
    // problems on recursion
    // reverse an array
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    reverse_arr(0, n-1, arr);
    return 0;
}