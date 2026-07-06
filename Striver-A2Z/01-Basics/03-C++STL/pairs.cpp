#include<bits/stdc++.h>
using namespace std;

void explain_pair() {

    // Basic pair
    pair<int,int> p = {3,5};

    cout << p.first << " " << p.second << endl;

    // make_pair()
    pair<int,int> p2 = make_pair(10,20);

    cout << p2.first << " " << p2.second << endl;

    // Nested pair
    pair<pair<int,int>, char> q = {{1,2},'A'};

    cout << q.first.first << " "
         << q.first.second << " "
         << q.second << endl;

    // Swap
    swap(p,p2);

    cout << p.first << " " << p.second << endl;

    // Comparison
    cout << (p < p2) << endl;

    // Vector of pairs
    vector<pair<int,int>> v;

    v.push_back({1,2});
    v.emplace_back(3,4);

    for(auto x : v)
        cout << x.first << " " << x.second << endl;
}

int main() {

    explain_pair();

    return 0;
}

/*
Useful Operations
-----------------
first
second
make_pair()
swap()
comparison (<, >, ==)

Time Complexity
---------------
Access first/second -> O(1)
swap()              -> O(1)
comparison          -> O(1)
*/