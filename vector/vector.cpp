#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector declaration
    vector<int> vec(5,0);

    // push_back(x) -> inserts x at the last of the vector
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    // pop_back -> Deletes the last element of the vector
    vec.pop_back(); // removes 45

    // front() and back()
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    // at(i)

    cout << vec.at(5) << endl;

    // iterator
    // in for loop we take a counter variable usually called as i or j which we use to get the index of array or vector but we dont store value at that index in i or j
    // but an iterator directly stores that  value inside it
    for(auto i : vec){ // we can write int instead of auto but make sure the type of iterator must be same as that of the type of vector.
        cout << i << " "; // now here the iterator i directly stores the value at the index
    }
    cout << endl;

    // Vector functions
    // size() -> returns the size of the vector
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
    // SIZE VS CAPACITY
    // size is the number of elements present in the vector and capacity is how many elements can be stored in a vector. they may or may not be same

    // STATIC VS DYNAMIC MEMORY ALLOCATION
    // Static memory : memory allocation at the time of compilation
    // Dynamic memory : momory allocation at run time

    // static memory is of stack type and dynamic memory is of heap type

    // arrays are examples of static memory whereas vectors are examples of dynamic memory
    
    // How are vectors stored in the memory?
    // assume we execute v.push_back(0) in an empty vector, then in the memory an array of size 1 is created and value 0 is stored in it
    // now if we again v.push_back(1), then the value tries to get in the initial array of size 1 but since its full, now the size of array gets doubled to 2 and then 0 and 1 both are stored in it and the previous array of size 1 gets deleted. this procees gets done automatically
    // now if we again v.push_back(2), then the value again tries to get in the previous array of size 2 but since its full, now the size of array again gets doubled to 4 and then the values 0,1,2 get stores in it and the previous array of size 2 gets deleted and this new array of size 4 is formed.
    // now here if we print the size of the vector it will show 3 but if we print the capacity it will be 4. so not size but the capacity gets doubled whenever there is no spcae left for the upcoming number




    return 0;
}