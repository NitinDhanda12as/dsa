#include<bits/stdc++.h>
using namespace std;

void explain_queue() {

    queue<int> q;

    // Insertion
    q.push(1);          // {1}
    q.push(2);          // {1,2}
    q.emplace(3);       // {1,2,3}

    // Front and Back
    cout << q.front() << endl;     // 1
    cout << q.back() << endl;      // 3

    // Size
    cout << q.size() << endl;      // 3

    // Deletion
    q.pop();                       // {2,3}

    cout << q.front() << endl;     // 2
    cout << q.back() << endl;      // 3
    cout << q.size() << endl;      // 2

    // Empty
    cout << q.empty() << endl;     // 0 (false)

    // Swap
    queue<int> q2;

    q2.push(10);                   // {10}
    q2.push(20);                   // {10,20}

    q.swap(q2);

    cout << q.front() << endl;     // 10
    cout << q.back() << endl;      // 20

    cout << q2.front() << endl;    // 2
    cout << q2.back() << endl;     // 3

    // Traversal (Only way)
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;                  // 10 20

    cout << q.empty() << endl;     // 1 (true)
}

int main() {

    explain_queue();

    return 0;
}

/*
Useful Operations
-----------------
push()
emplace()
pop()
front()
back()
size()
empty()
swap()

Not Allowed
-----------
q[0]
q.begin()
q.end()
q.top()
q.insert()
q.erase()

Reason
------
Queue follows FIFO (First In First Out).
Insertion happens at the back.
Deletion happens from the front.
Only front and back elements can be accessed.

Time Complexity
---------------
push()      -> O(1)
emplace()   -> O(1)
pop()       -> O(1)
front()     -> O(1)
back()      -> O(1)
size()      -> O(1)
empty()     -> O(1)
swap()      -> O(1)
*/