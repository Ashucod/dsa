#include<bits/stdc++.h>
using namespace std;

// PAIRS
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << ", " << p.second << "\n";

    pair<int, pair<int, int>> q = {1, {3, 5}};
    cout << q.first << ", " << q.second.first << ", " << q.second.second << "\n";

    pair<int, int> arr[] = {{1, 5}, {2, 10}, {3, 15}};
    cout << arr[1].second << "\n"; // 10
}

// VECTORS
void explainVector() {
    // DECLARATION TYPES

    // Declares empty vector
    vector<int> v;

    // push_back() appends given value at the end of the vector
    // automatically reallocates memory when additional capacity is required
    v.push_back(1); 
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // Declares vector with given size
    // and fills it with a value
    // reallocates memory when required to append values
    vector<int> u(5, 10);

    // Declares empty vector with given size. Garbage value may be filled
    vector<int> u1(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1); // copies vector v1 to v2




}

int main() {
    explainPair();
    return 0;
}