#include <bits/stdc++.h>
using namespace std;

void pat(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
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
        pat(n);
    }

}