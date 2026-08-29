#include <bits/stdc++.h>
using namespace std;

int count(int n) {
     int c = 0;
     while(n > 0) {
        c++;
        n = n/10;
     } // Time complexity = O(log 10 (N)) because the loop run as much time it divides the number by 10
     // If we continuosly divide a number by lets say p till its greater than 0,
     // then the time complexity will be O(log p (N))

     // We can calculate number of digits using c = (int)(log10(n) + 1);

     return c;
}

int add_digits(int n) {
    int add = 0, dig;
    while(n > 0) {
        dig = n%10;
        add = add + dig;
        n = n / 10;
    }
    return add;
}

int reverse(int n) {
    int num = 0, dig;
    while(n > 0) {
        dig = n % 10;
        num = num*10 + dig;
        n = n / 10;
    }
    return num; 
}

int main() {
    cout << "Number of digits in 7789 are " << count(7789) << endl;
    cout << "Addition of digits of number 7789 is " << add_digits(7789) << endl;
    cout << "The number 7789 when reversed looks like " << reverse(7789) << endl;

}