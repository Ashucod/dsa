#include <bits/stdc++.h>
using namespace std;

// Square/rectangle pattern
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

// left aligned lower triangle
void pat2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

// left aligned upper triangle
void pat3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n-i+1); j++) {
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
        pat3(n);
    }

}