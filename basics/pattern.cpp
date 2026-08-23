#include <bits/stdc++.h>
using namespace std;

void pat1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pat2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter no. of test cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        pat2(n);
    }

}