#include<bits/stdc++.h>
using namespace std;

void explain_stack() {

    stack<int> st;

    // Insertion
    st.push(1);          // {1}
    st.push(2);          // {1,2}
    st.emplace(3);       // {1,2,3}

    // Top
    cout << st.top() << endl;      // 3

    // Size
    cout << st.size() << endl;     // 3

    // Deletion
    st.pop();                      // {1,2}

    cout << st.top() << endl;      // 2
    cout << st.size() << endl;     // 2

    // Empty
    cout << st.empty() << endl;    // 0 (false)

    // Swap
    stack<int> st2;

    st2.push(10);                  // {10}
    st2.push(20);                  // {10,20}

    st.swap(st2);

    cout << st.top() << endl;      // 20
    cout << st2.top() << endl;     // 2

    // Emptying a stack
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;                  // 20 10

    cout << st.empty() << endl;    // 1 (true)
}

int main() {

    explain_stack();

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

Not Allowed
-----------
st[0]
st.begin()
st.end()
st.front()
st.back()
st.insert()
st.erase()

Reason
------
Stack follows LIFO (Last In First Out).
Only the top element can be accessed.

Time Complexity
---------------
push()      -> O(1)
emplace()   -> O(1)
pop()       -> O(1)
top()       -> O(1)
size()      -> O(1)
empty()     -> O(1)
swap()      -> O(1)
*/