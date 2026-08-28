#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};


    // Ways to print a vector 
    // common/ basic way
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // a shorter way but accessing the memory first
    cout << endl;

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    // shortest way and directly accesses the value in that memory
    for(auto it : v) {
        cout << it << " ";
    }

    cout << endl;

    

    return 0;
}