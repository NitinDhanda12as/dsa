#include<bits/stdc++.h>
using namespace std;

void explain_map() {

    map<int, string> mp;

    // ==========================
    // Insertion
    // ==========================

    mp[3] = "Three";             // {3 -> Three}
    mp[1] = "One";               // {1 -> One, 3 -> Three}
    mp.insert({2, "Two"});       // {1 -> One, 2 -> Two, 3 -> Three}
    mp.emplace(4, "Four");       // {1 -> One, 2 -> Two, 3 -> Three, 4 -> Four}

    // Duplicate key updates value
    mp[2] = "TWO";               // {1 -> One, 2 -> TWO, 3 -> Three, 4 -> Four}

    // ==========================
    // Traversal
    // ==========================

    for(auto x : mp) {
        cout << x.first << " -> " << x.second << endl;
    }

    /*
    Output:
    1 -> One
    2 -> TWO
    3 -> Three
    4 -> Four
    */

    // ==========================
    // Access
    // ==========================

    cout << mp[3] << endl;       // Three

    // ==========================
    // Find
    // ==========================

    auto it = mp.find(2);

    if(it != mp.end())
        cout << it->first << " " << it->second << endl;
    // 2 TWO

    // ==========================
    // Count
    // ==========================

    cout << mp.count(2) << endl;     // 1
    cout << mp.count(10) << endl;    // 0

    // ==========================
    // Erase
    // ==========================

    mp.erase(3);

    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    /*
    1 One
    2 TWO
    4 Four
    */

    // erase using iterator

    mp.erase(mp.begin());

    /*
    2 TWO
    4 Four
    */

    // ==========================
    // Lower Bound
    // ==========================

    auto lb = mp.lower_bound(3);

    cout << lb->first << " " << lb->second << endl;
    // 4 Four

    // ==========================
    // Upper Bound
    // ==========================

    auto ub = mp.upper_bound(2);

    cout << ub->first << " " << ub->second << endl;
    // 4 Four

    // ==========================
    // Size
    // ==========================

    cout << mp.size() << endl;

    // ==========================
    // Empty
    // ==========================

    cout << mp.empty() << endl;

    // ==========================
    // Clear
    // ==========================

    mp.clear();

    cout << mp.empty() << endl;
}

int main() {

    explain_map();

    return 0;
}

/*
Properties
----------
Stores key-value pairs.
Keys are unique.
Keys remain sorted automatically.

Useful Operations
-----------------
[]
insert()
emplace()
erase()
find()
count()
lower_bound()
upper_bound()
begin()
end()
size()
empty()
clear()

Not Allowed
-----------
push_back()
push_front()
pop_back()
pop_front()

Time Complexity
---------------
[]              -> O(log n)
insert()        -> O(log n)
emplace()       -> O(log n)
erase()         -> O(log n)
find()          -> O(log n)
count()         -> O(log n)
lower_bound()   -> O(log n)
upper_bound()   -> O(log n)
size()          -> O(1)
empty()         -> O(1)
clear()         -> O(n)
*/