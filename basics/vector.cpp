#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    for(auto it : v) {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}