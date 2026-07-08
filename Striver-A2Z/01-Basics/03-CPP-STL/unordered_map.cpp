#include<bits/stdc++.h>
using namespace std;

void explain_unordered_map() {

    unordered_map<int,string> ump;

    // Insertion

    ump[3] = "Three";
    ump[1] = "One";
    ump[2] = "Two";

    ump.insert({4,"Four"});
    ump.emplace(5,"Five");

    // Traversal
    // Order is NOT guaranteed

    for(auto x : ump){
        cout << x.first << " -> " << x.second << endl;
    }

    // Access

    cout << ump[2] << endl;      // Two

    // Find

    auto it = ump.find(3);

    if(it != ump.end())
        cout << it->second << endl;

    // Count

    cout << ump.count(3) << endl;    //1

    // Erase

    ump.erase(3);

    cout << endl;

    for(auto x : ump){
        cout << x.first << " -> " << x.second << endl;
    }

    // Size

    cout << ump.size() << endl;

    // Empty

    cout << ump.empty() << endl;

    // Clear

    ump.clear();

    cout << ump.empty() << endl;
}

int main(){

    explain_unordered_map();

    return 0;
}

/*
Difference from map
-------------------
NOT sorted.

Implemented using Hashing.

Duplicate keys are NOT allowed.

Useful Operations
-----------------
[]
insert()
emplace()
erase()
find()
count()
size()
empty()
clear()

Not Allowed
-----------
lower_bound()
upper_bound()

Average Time Complexity
-----------------------
[]          -> O(1)
insert()    -> O(1)
erase()     -> O(1)
find()      -> O(1)
count()     -> O(1)

Worst Case
----------
All above operations -> O(n)

Reason:
Hash collisions.
*/