#include<bits/stdc++.h>
using namespace std;

int main() {
    // So to solve this problem we have some data structures in c++ in STL
    // These are map and unordered map

    // syntax of map:
    // map<data_type_of_key, data_type_of_value> map_name;
    // so key is the number/ query that we want to find the frequency of
    // value is the frequency of key/number
    // so how is this different from regular hashing?
    // in regular hashing if the query ranges from lets say 0 to 12 ie is maximum query that can be asked is 12
    // then we had to declare hash array of size 13 and this would be also true for large values
    // imagine the maximum value of query to be in 10^6 range and we cannot even go beyond 10^7 even after declaring array
    // and the numbers without queries occupy unecessary space in the memory and the queries which has 0 ocuurence also require space
    // but map solves this problem
    // map only stores the queries and stores only frequencies != 0. so whenever a query is asked/ at time of fetching, it will check does it exist in map, if yes it prints its non-zero frequency and if no ie the number doesnt occur in array or string ie its frequency is 0 it will directly give us 0 without storing that as key.
    
    // this mapping is sorted
    

    // Code starts here
    int n;
    cin >> n;
    int arr[n];

    //input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // iterate in mpp
    // just to see how mapping is done
    // for(auto it : mpp) {
    //     cout << it.first << " -> " << it.second << endl;
    // } 
    // output :
    // 5
    // 3 1 2 1 2
    // 1 -> 2
    // 2 -> 2
    // 3 -> 1
    // this proves that the mapping is sorted

    // query
    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        // fetching

        cout << mpp[number] << endl;
    }

    // so map data structure uses less space, maps in sorted manner and doesnt have that query problem since we can declare the key data type to long or long long to get query as large as wish

    
    return 0;
}