#include<bits/stdc++.h>
using namespace std;

int main() {
    // syntax
    int arr[5];
    arr[] = {1, 2, 3, 4, 5};

    // int arr[] = {1,2,3,4,5};

    // Size of an array
    int size = sizeof(arr) / sizeof(int);

    // finding smallest and largest number in an array
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    cout << "Smallest : " << smallest << endl;
    cout << "Largest : " << largest << endl;

    // Arrays when passed into a function are always by pass by reference
    // so if you make any change outside the main function in the array it will change the original array

    
    return 0;
}