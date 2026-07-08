#include<bits/stdc++.h>
using namespace std;

void explain_multiset() {

    multiset<int> ms;

    // ==========================
    // Insertion
    // ==========================

    ms.insert(5);         // {5}
    ms.insert(2);         // {2,5}
    ms.emplace(5);        // {2,5,5}
    ms.insert(8);         // {2,5,5,8}

    // Duplicate elements are allowed

    for(auto x : ms) {
        cout << x << " ";
    }
    cout << endl;         // 2 5 5 8

    // ==========================
    // Count
    // ==========================

    cout << ms.count(5) << endl;      // 2
    cout << ms.count(10) << endl;     // 0

    // ==========================
    // Find
    // ==========================

    auto it = ms.find(5);

    cout << *it << endl;              // 5 (first occurrence)

    // ==========================
    // Erase by value
    // ==========================

    ms.erase(5);                      // removes ALL 5's

    for(auto x : ms) {
        cout << x << " ";
    }
    cout << endl;                     // 2 8

    // ==========================
    // Erase only one occurrence
    // ==========================

    ms.insert(5);
    ms.insert(5);

    // {2,5,5,8}

    ms.erase(ms.find(5));

    for(auto x : ms) {
        cout << x << " ";
    }
    cout << endl;                     // 2 5 8

    // ==========================
    // Lower Bound
    // ==========================

    auto lb = ms.lower_bound(5);

    cout << *lb << endl;              // 5

    // ==========================
    // Upper Bound
    // ==========================

    auto ub = ms.upper_bound(5);

    cout << *ub << endl;              // 8
}

int main() {

    explain_multiset();

    return 0;
}

/*
Difference from set
-------------------
Duplicates are allowed.

Useful Operations
-----------------
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

Important
---------
erase(value) removes ALL occurrences.

erase(iterator) removes ONLY ONE occurrence.

Not Allowed
-----------
ms[0]
ms.front()
ms.back()
push_back()
push_front()

Time Complexity
---------------
insert()        -> O(log n)
emplace()       -> O(log n)
erase()         -> O(log n)
find()          -> O(log n)
count()         -> O(log n + occurrences)
lower_bound()   -> O(log n)
upper_bound()   -> O(log n)
size()          -> O(1)
empty()         -> O(1)
clear()         -> O(n)
*/