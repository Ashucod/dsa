#include<bits/stdc++.h>
using namespace std;

int main() {
    // linear search
    // goes through every element of array and checks whether the element is what we want
    // most easiest algorithm

    int arr[] = {5, 7, 13, 9, 8};

    int number;
    cin >> number;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == number) 
        {
            cout << "Number present at index " << i << endl;
            return 0;
        }
        
    }
    
    cout << "Number not present in the array.\n";
    return 0;
}