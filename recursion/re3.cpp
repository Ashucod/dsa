#include<bits/stdc++.h>
using namespace std;

// parameterized function to print sum of numbers from 1 to n
void sum_num_para(int n, int sum) {
    if(n < 1) 
    {
        cout << sum << endl;
        return;
    }
    sum_num_para(n-1, sum + n);
}

// functional recursion for same function
int sum_num(int n) { // sum of numbers from 1 to n 
    if(n < 1) return 0;
    return (n + sum_num(n-1));
}

int factorial(int n){
    if(n < 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    // Parameterized and functional recursion
    // Parameterized : recursion with the help of change in parameters passed to a function
    // Parameterized Recursion: You pass the running answer forward down the call stack via a function parameter.
    // Functional Recursion: The function returns the answer back up the call stack as recursive calls finish and unwind.
    // Functional : recursion with the help of the same function.
    int n;
    cin >> n;
    int sum = sum_num(n);
    cout << sum << endl;
    sum_num_para(n, 0);
    int f = factorial(n);
    cout << "Factorial : " << f << endl;
    return 0;
}