#include<bits/stdc++.h>
using namespace std;

int main() {
    // now learning character hashing ie we will do the same thing but now for characters and not numbers
    // so to do that the input will not be an character array, it will be a string
    // and to make a hash table we have to map characters to the indices of hash array using ASCII codes

    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[(s[i] - 'a')] += 1;
    }

    // query
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[(c-'a')] << endl;
    }

    return 0;
}