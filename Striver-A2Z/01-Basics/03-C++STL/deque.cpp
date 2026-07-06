#include<bits/stdc++.h>
using namespace std;

void explain_deque() {

    deque<int> dq;

    // Main advantage over vector
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    // {1,2,3,4}

    cout << dq.front() << " " << dq.back() << endl;
    cout << dq[2] << endl;       // Random indexing is supported

    // Traversal
    for(auto it : dq) {
        cout << it << " ";
    }
    cout << endl;

    // Deletion
    dq.pop_front();              // {2,3,4}
    dq.pop_back();               // {2,3}

    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    // Insertion / Erase using iterator
    dq.insert(dq.begin()+1, 100);    // {2,100,3}

    dq.erase(dq.begin()+1);          // {2,3}

    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    explain_deque();
    return 0;
}

/*
Same as vector:
----------------
push_back()
pop_back()
front()
back()
[]
begin()
end()
insert()
erase()
clear()
empty()
size()

Extra compared to vector:
-------------------------
push_front()
pop_front()
emplace_front()

Not Allowed:
------------
None (all vector operations are supported)

Time Complexity:
----------------
push_back()     -> O(1)
push_front()    -> O(1)
pop_back()      -> O(1)
pop_front()     -> O(1)
front()         -> O(1)
back()          -> O(1)
[]              -> O(1)
insert()        -> O(n)
erase()         -> O(n)
size()          -> O(1)
clear()         -> O(n)
*/