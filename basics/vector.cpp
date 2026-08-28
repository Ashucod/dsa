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


    // Ways to delete elements from a vector
    // {10, 20, 30, 40}
    // To delete a single element at a time
    v.erase(v.begin() + 1); // To delete 20
    for(auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // To delete a range of elements
    v.push_back(20);
    // {10, 30, 40, 20}
    v.erase(v.begin()+1 , v.begin()+3); // deletes elements from [start, end) ie 30, 40 will be deleted and not 20
    for(auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Insert function
    vector<int> vec(2, 100); // {100, 100}
    vec.insert(vec.begin(), 300); // {300, 100, 100}
    vec.insert(vec.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    // the above says add from begin()+1 position 2 instances of 10

    // to print size of vector
    cout << vec.size() << endl;

    // to erase last element
    vec.pop_back();
    for(auto it : vec) {
        cout << it << " ";
    }
    cout << endl;

    // v1.swap(v2) => swaps both the vectors

    // v.clear() => erases the entire vector

    cout << v.empty() << endl; // returns 0 if false ie when vector is not empty and returns 1 if true ie when vector is empty


    return 0;
}