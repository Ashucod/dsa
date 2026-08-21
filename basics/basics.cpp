#include <bits/stdc++.h>
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
    // string str;
    // getline(cin, str);
    // cout << str;


    //char

    // IF-Else

    //Switch case
    // int day;
    // cin >> day;

    // switch(day){
    //     case 1:
    //         cout << "Monday\n";
    //         break;
    //     case 2:
    //         cout << "Tuesday\n";
    //         break;
    //     case 3:
    //         cout << "Wednesday\n";
    //         break;
    //     case 4:
    //         cout << "Thursday\n";
    //         break;
    //     case 5:
    //         cout << "Friday\n";
    //         break;
    //     case 6:
    //         cout << "Saturday\n";
    //         break;
    //     case 7:
    //         cout << "Sunday\n";
    //         break;
    //     default:
    //         cout << "Wrong input :(\n";
    //         break;
    // }


    // Arrays
    // 1D Arrays
    // int arr[5]; // Array of size 5 and index goes from 0 to 1;
    // 2D Arrays
    // int arr[3][5]; // Arrays with 15 containers and index starts from 0

    // Strings
    // Its also a type of array of chars

    // string s = "Ashish";
    // int len = s.size(); // length is 6
    // cout << "Last alphabet is : " << s[len-1] << "\n";


    // Functions
    // void function --> doesnt return any value
    // return function --> returns a value
    // parameterized function --> accepts some parameters/inputs
    // non parameterized function --> doest accept any parameters/inputs

    // return_type fun_name(parameters) {
    //      return __ ;
    // }

    // parameters may be of any data types like a function can accept multiple data types at same time
    // a function with a return type is always called by assigning with the same type of variable
    // a void function can be called directly;
    // a function can do only one task. It can either print an output or it can return a value by doing some operations.
    // if a function is declared to return some value and there is no return statement, it will return a gabage value;

    // PASS BY VALUE
    // the original variable is not sent or the address is not sent only the value of the variable is sent to the function.
    // when we pass a variable inside a function, it makes a copy of the things inside the variable and sends it to the functions parameters.

    // PASS BY REFERENCE means i am sending the same variable along with its address to the function;
    // so operations done in the function on the vaiable will change the original value of the variable.
    // to do pass by reference we just add a '&' symbol just before the parameter name
    // EXAMPLE
    // void doSomething(int &num)
    // & just tells that to take the variable along with the address and not just the value of the variable by making a copy of it

    // IMP: Arrays are always passed with reference, so no need to add the & symbol

    return 0;
}