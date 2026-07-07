#include<bits/stdc++.h>
using namespace std;

void explain_multimap() {

    multimap<int, string> mp;

    // Insertion
    mp.insert({2, "Two"});
    mp.insert({1, "One"});
    mp.insert({2, "TWO"});
    mp.emplace(3, "Three");

    /*
    1 -> One
    2 -> Two
    2 -> TWO
    3 -> Three
    */

    // Traversal
    for(auto x : mp){
        cout << x.first << " -> " << x.second << endl;
    }

    // Find (returns first occurrence)
    auto it = mp.find(2);

    cout << it->first << " " << it->second << endl;

    // Count
    cout << mp.count(2) << endl;     // 2

    // Erase ALL entries having key = 2
    mp.erase(2);

    cout << endl;

    for(auto x : mp){
        cout << x.first << " -> " << x.second << endl;
    }
}

int main() {

    explain_multimap();

    return 0;
}

/*
Difference from map
-------------------
Duplicate keys are allowed.

Important
---------
No [] operator.

Use insert() or emplace().

Useful Operations
-----------------
insert()
emplace()
erase()
find()
count()
begin()
end()
size()
empty()
clear()

Time Complexity
---------------
insert()    -> O(log n)
erase()     -> O(log n)
find()      -> O(log n)
count()     -> O(log n + occurrences)
*/