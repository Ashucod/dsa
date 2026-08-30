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

void isPalindrome(int n) {
    // REVERSED NUMBER == ORIGINAL NUMBER --> PALINDROME NUMBER     
    int num = n, rev_num = 0, d;
    while(n > 0) {
        d = n % 10;
        rev_num = rev_num*10 + d;
        n = n / 10;
    }

    if(rev_num == num) {
        cout << num << " is a palindrome number" << endl;
    } else {
        cout << num << " is not a palindrome number" << endl;
    }
}

void isAmstrong(int n) {
    int num = n, dig, sum = 0;
    while(n > 0) {
        dig = n % 10;
        sum = sum + (dig*dig*dig); 
        n = n / 10;
    }

    if(sum == num) {
        cout << num << " is an amstrong number" << endl;
    } else {
        cout << num << " is not an amstrong number" << endl;
    }
}

void divisors(int n) {
    cout << "Divisors of " << n << " are ";
    // TC : O(N)
    // for (int i = 1; i <= n; i++) {
    //     if (n % i == 0){
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;

    // Another way of finding divisors/factors
    // 1 x 36
    // 2 x 18
    // 3 x 12
    // 4 x 9
    // 6 x 6 _____ Below this these are same pairs but written is opposite order.
    // 9 x 4        So what do we observe is we'll iterate loop till the square root of the number as like in this case is 6
    // ..           And then use sort() function from STL on the vector storing the factors
    //              Because without sort it will print like 1 36 2 18 3 12 4 9 6
    vector<int> ls;

    // TC : O(sqrt(N))
    for (int i = 1; i <= sqrt(n); i++) { // we can also use i*i <= n if not square root but the TC will remain same
        if(n % i == 0) {
            ls.push_back(i);
            if((n/i) != i) {
                ls.push_back((n/i));
            }
        }
    }

    //Sorting the vector
    // O(n log(n))
    sort(ls.begin(), ls.end());

    // O(number of factors)
    for(auto it : ls) cout << it << " ";

    cout << endl;
}

void isPrime(int n) {
    int c = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0){
            c++;
            if((n/i) != i) c++;
        }
    }

    if (c == 2 || n == 1) cout << n << " is a prime number." << endl;
    else cout << n << " is not a prime number." << endl;
}

int gcd(int x, int y) {
    int gcd = 0, n;
    if (x < y) n = x;
    else if (x > y) n = y;
    else return x;

    // we can also use the min(x, y) function without following the above steps
    for(int i = 1; i <= n; i++) {
        if (x % i == 0 && y % i == 0) {
            if(i >= gcd) gcd = i;
        }
    }
    return gcd;
}

int main() {
    cout << "Number of digits in 7789 are " << count(7789) << endl;
    cout << "Addition of digits of number 7789 is " << add_digits(7789) << endl;
    cout << "The number 7789 when reversed looks like " << reverse(7789) << endl;
    isPalindrome(121);
    isAmstrong(371);
    divisors(36);
    isPrime(19);
    cout << "GCD of 9 & 12 is " << gcd(18, 12) << endl;
}