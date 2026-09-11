#include<bits/stdc++.h>
using namespace std;

int main() {

    // assume there is an array [1, 2, 3, 2, 1] and user wants to know how mant time a number n ocuurs in the array
    // for example 1 occurs 2 times
    //              2 occurs 2 times
    //              3 occurs 1 times
    //              4 occurs 0 times
    //              10 occurs 0 times
    // so we write an function which would take the number n and array as input parameters and set a counter variable and return the number of occurences
    // but theres a problem if the user wants to check occurence of 5 different numbers in the array then the time complexity becomes O(5N)
    // and if this numbers extends to Q which is very huge and lets say the array too is very huge then the timecomplexty would be O(QN)
    // therfore to optimize this we use hashing.

    // What is hashing?
    // hashing in si,mple terms is just pre-storing and then fetching
    // what are we pre-storing?
    // so we are making an other array with size equal to different numbers in the array
    // we will initialize all with 0. This array is called hash array and the 0's stored in it are the initial frequencies of those elements
    // when we will come across an occurence we will increment the frequency of that element
    // now when the user will ask how many times does 3 occur in my array we will fetch the frequency of 3 from the hash array using (assume we have named the hash array as hash[]) hash[3]

    // so to do this first we should know which numbers can the user ask like user can ask for occurence of any number between 0 to 12.
    // when we get to know this, we will just create a hash array of size 13 and proceed as discussed above

    // input structure:
    // size of array
    // array input
    // number of query
    // queries one by one

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    // precomputation starts from here
    // fist we are assuming that the query range is from 0 to 12. if the problem gives another range we have to declare hash array/table accordingly
    int hash[13] = {0}; // 12 + 1
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    while(q--) {
        int number;
        cin >> number; 
        // fetching start from here
        cout << hash[number] << endl;
    }

    // now the problem is that an integer array size can be <= 10^9 (nearly) inside main function
    // and we cannot declare it more than that size so if we do that the code will throw segmentation fault/error
    // so to solve this we can declare it as a global array and we get a option to get an array of size nearly 10^7

    // for an boolean array this size is 10^7 inside main function
    // and 10^8 globally


    return 0;
}