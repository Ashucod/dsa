#include <iostream>
using namespace std;

int main() {
    // Data Types
    //int, long, double, float

    // string and getline
    // string str1;
    // string str2;

    // cin >> str1 >> str2; // I/P: Ashish Shinde
    // cout << str1 << " " << str2; // O/P: Ashish Shinde

    // cin string inputs only one word or we can say anything before first space
    //to get a full line as input we use getline
    string str;
    getline(cin, str);
    cout << str;

    return 0;
}