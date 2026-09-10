#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if(n <= 1) return n; // Base condition
    int last = fibo(n-1); // first this recursion tree will be completed  and then the next one will start
    int secondLast = fibo(n-2);
    return (last + secondLast);
} // TC : O(2^n)

int main() {
    // Multiple recursion calls
    // example fibonacci number series
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
    // we will solve this series using multiple recursion calls
    // assume we want a number from fibonacci series at nth position;
    int n;
    cout << "Enter the position : ";
    cin >> n;
    int ans = fibo(n-1);
    cout << ans << endl;
    
    // we will always draw a recursion tree in tougher questions and remember which one recurcion calls gets executed first like in fibonacci series the f(b-1) get executed first completely and then the second recursion call will be executed

    return 0;
}