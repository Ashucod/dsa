#include<bits/stdc++.h>
using namespace std;

int main() {
    // reversing using 2 pointer approach
    // in 2 pointer approach we will make two pointers/variables to point one at start and the other one at the end.
    // then we will update them to move the start pointer to next position and the end pointer to previous position
    // then we will swap them and do this till these pointers meet or cross each other

    int arr[] = {1,2,3,4,5};
    int start = 0;
    int end = 4;

    for(int i = 0; i < 5/2; i++){
        if(start >= end) break;
        int c = arr[start];
        arr[start] = arr[end];
        arr[end] = c;

        start++;
        end--;
    }

    // printing the reversed array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}