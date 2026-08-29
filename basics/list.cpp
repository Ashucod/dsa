#include<bits/stdc++.h>

int main() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    // list allows front operations
    ls.push_front(5); // {5, 2, 4}

    // rest functions same as vectors
    // insert, begin, end, rend, rbegin, size, empty

    return 0;
}