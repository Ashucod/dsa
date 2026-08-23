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

// if vertical numbers are same in the pattern then just replace * with column ie j
// if horizontal numbers are same in the paatern then just replace * with row ie i

// hollow square pattern
void pat4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

// pyramid star pattern
void pat5(int n) {
    // space-star-space
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n-i; j++) {
            cout << "   ";
        }
        // stars
        for (int j = 0; j < (2*i + 1); j++) {
            cout << " * ";
        }
        // space
        for (int j = 0; j < n-i; j++) {
            cout << "   ";
        }

        cout << endl;
    }
}

// inverted pyramid star pattern
void pat6(int n) {
    // space-star-space
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        // stars
        for (int j = 0; j < (2*(n-i) - 1); j++) {
            cout << " * ";
        }

        // space
        for (int j = 0; j < i; j++) {
            cout << "   ";
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
        pat6(n);
    }

}