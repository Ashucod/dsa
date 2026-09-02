#include<bits/stdc++.h>
using namespace std;

void print_name(int i, int n) {
    // Base condition
    if(i > n) return;

    cout << "Ashish" << endl;
    print_name(i+1, n);
} // Time complexity : O(N) ; Stack Space : O(N)

void print_num(int i, int n) {
    // base condition
    if(i > n) return;

    cout << i << endl;
    print_num(i+1, n);
} // time complexity : O(N) ; stack space : O(N)

void print_rev(int n) {
    // Base condition
    if(n < 1) return;

    cout << n << endl;
    print_rev(n-1);
} // TC : O(N) ; SS : O(N)

int main() {
    print_name(1, 3);
    print_num(1, 4);
    print_rev(4);

    return 0;
}