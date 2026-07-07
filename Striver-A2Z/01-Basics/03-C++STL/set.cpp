#include<bits/stdc++.h>
using namespace std;

void explain_set() {

    set<int> st;

    // ==========================
    // Insertion
    // ==========================

    st.insert(5);        // {5}
    st.insert(2);        // {2,5}
    st.emplace(8);       // {2,5,8}
    st.insert(5);        // Duplicate ignored -> {2,5,8}

    // Traversal (Always Sorted)
    for(auto x : st) {
        cout << x << " ";
    }
    cout << endl;        // 2 5 8

    // ==========================
    // Size
    // ==========================

    cout << st.size() << endl;      // 3

    // ==========================
    // Find
    // ==========================

    auto it = st.find(5);

    if(it != st.end())
        cout << *it << endl;        // 5

    auto it2 = st.find(10);

    if(it2 == st.end())
        cout << "Not Found" << endl;

    // ==========================
    // Count
    // ==========================

    cout << st.count(5) << endl;    // 1
    cout << st.count(10) << endl;   // 0

    // ==========================
    // Erase
    // ==========================

    st.erase(5);                    // {2,8}

    for(auto x : st) {
        cout << x << " ";
    }
    cout << endl;                   // 2 8

    // erase using iterator

    st.erase(st.begin());           // {8}

    for(auto x : st) {
        cout << x << " ";
    }
    cout << endl;                   // 8

    // ==========================
    // Lower Bound
    // ==========================

    st.insert(2);
    st.insert(5);
    st.insert(10);

    // {2,5,8,10}

    auto lb = st.lower_bound(6);

    cout << *lb << endl;            // 8

    // ==========================
    // Upper Bound
    // ==========================

    auto ub = st.upper_bound(8);

    cout << *ub << endl;            // 10

    // ==========================
    // Empty
    // ==========================

    cout << st.empty() << endl;     // 0

    // ==========================
    // Clear
    // ==========================

    st.clear();

    cout << st.empty() << endl;     // 1
}

int main() {

    explain_set();

    return 0;
}

/*
Properties
----------
Stores only unique elements.
Elements remain sorted automatically.

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

Not Allowed
-----------
st[0]
st.front()
st.back()
push_back()
push_front()
pop_back()
pop_front()

Reason
------
Set is implemented using a Balanced BST.
Random indexing is not possible.

Time Complexity
---------------
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