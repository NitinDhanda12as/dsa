#include<bits/stdc++.h>
using namespace std;

void explain_list() {

    list<int> ls;

    // Main advantage over vector
    ls.push_back(3);
    ls.push_back(4);
    ls.push_front(2);
    ls.emplace_front(1);

    // {1,2,3,4}

    cout << ls.front() << " " << ls.back() << endl;

    // Traversal
    for(auto x : ls) {
        cout << x << " ";
    }
    cout << endl;

    // Deletion
    ls.pop_front();      // {2,3,4}
    ls.pop_back();       // {2,3}

    for(auto x : ls) {
        cout << x << " ";
    }
    cout << endl;

    // Insertion / Erase using iterator
    auto it = ls.begin();
    advance(it, 1);          // move iterator to second element

    ls.insert(it, 100);      // {2,100,3}

    for(auto x : ls) {
        cout << x << " ";
    }
    cout << endl;

    it = ls.begin();
    advance(it, 1);

    ls.erase(it);            // {2,3}

    for(auto x : ls) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    explain_list();
    return 0;
}

/*
Different from vector:
----------------------
push_front()
emplace_front()
pop_front()

No Random Access:
-----------------
❌ ls[i]
❌ begin()+k
❌ end()-k

Reason:
-------
list provides Bidirectional Iterators.
Allowed : ++ , --
Not Allowed : + , -

Use:
----
advance(it, k);     // Move iterator forward
advance(it, -k);    // Move iterator backward

Time Complexity:
----------------
push_back()     -> O(1)
push_front()    -> O(1)
pop_back()      -> O(1)
pop_front()     -> O(1)
front()         -> O(1)
back()          -> O(1)
insert()        -> O(1) (iterator already known)
erase()         -> O(1) (iterator already known)
size()          -> O(1)
clear()         -> O(n)
*/