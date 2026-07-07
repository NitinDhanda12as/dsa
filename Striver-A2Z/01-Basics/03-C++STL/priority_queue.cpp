#include<bits/stdc++.h>
using namespace std;

void explain_priority_queue() {

    // ==========================
    // Max Heap (Default)
    // ==========================

    priority_queue<int> pq;

    pq.push(5);          // {5}
    pq.push(2);          // {5,2}
    pq.push(8);          // {8,5,2}
    pq.emplace(10);      // {10,8,5,2}

    cout << pq.top() << endl;      // 10
    cout << pq.size() << endl;     // 4
    cout << pq.empty() << endl;    // 0

    pq.pop();                      // removes 10

    cout << pq.top() << endl;      // 8

    cout << "Max Heap : ";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;                  // 8 5 2


    // ==========================
    // Min Heap
    // ==========================

    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);         // {5}
    minpq.push(2);         // {2,5}
    minpq.push(8);         // {2,5,8}
    minpq.emplace(10);     // {2,5,8,10}

    cout << minpq.top() << endl;   // 2

    minpq.pop();                   // removes 2

    cout << minpq.top() << endl;   // 5

    cout << "Min Heap : ";
    while(!minpq.empty()) {
        cout << minpq.top() << " ";
        minpq.pop();
    }
    cout << endl;                  // 5 8 10


    // ==========================
    // Swap
    // ==========================

    priority_queue<int> p1;
    priority_queue<int> p2;

    p1.push(100);
    p1.push(50);

    p2.push(10);
    p2.push(5);

    p1.swap(p2);

    cout << p1.top() << endl;      // 10
    cout << p2.top() << endl;      // 100
}

int main() {

    explain_priority_queue();

    return 0;
}

/*
Useful Operations
-----------------
push()
emplace()
pop()
top()
size()
empty()
swap()

Types
-----
priority_queue<int>
        -> Max Heap (Default)

priority_queue<int, vector<int>, greater<int>>
        -> Min Heap

Not Allowed
-----------
pq[0]
pq.begin()
pq.end()
pq.front()
pq.back()
pq.insert()
pq.erase()

Reason
------
Elements are stored as a Heap.
Only the highest priority element is accessible.

Time Complexity
---------------
push()      -> O(log n)
emplace()   -> O(log n)
pop()       -> O(log n)
top()       -> O(1)
size()      -> O(1)
empty()     -> O(1)
swap()      -> O(1)
*/  