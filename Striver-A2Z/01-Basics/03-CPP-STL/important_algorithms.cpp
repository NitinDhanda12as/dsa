#include<bits/stdc++.h>
using namespace std;

// Comparator for descending order
bool comp(int a, int b){
    return a > b;
}

// Comparator for pairs
//prefered 
bool pairComp(pair<int,int> a, pair<int,int> b){

    if(a.second != b.second)
        return a.second < b.second;

    return a.first > b.first;
}  

// not preffered 
// bool pairComp(pair<int,int> a, pair<int,int> b){

//     if(a.second < b.second) return true ;
//     if(a.second > b.second) return false ;

//     if(a.first > b.first) return true ;
//     return false ;
// }


void explain_algorithms(){

    // ==========================
    // sort()
    // ==========================

    vector<int> v = {5,2,8,1,4};

    sort(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";
    cout << endl;
    // 1 2 4 5 8

    // Descending

    sort(v.begin(), v.end(), greater<int>());

    for(int x : v)
        cout << x << " ";
    cout << endl;
    // 8 5 4 2 1

    // Custom Comparator

    sort(v.begin(), v.end(), comp);

    for(int x : v)
        cout << x << " ";
    cout << endl;
    // 8 5 4 2 1

    // ==========================
    // Sorting Pairs
    // ==========================

    vector<pair<int,int>> vp = {
        {1,4},
        {3,2},
        {5,2},
        {2,1}
    };

    sort(vp.begin(), vp.end(), pairComp);

    for(auto x : vp){
        cout << x.first << " " << x.second << endl;
    }

    /*
    Output

    2 1
    5 2
    3 2
    1 4
    */

    // ==========================
    // __builtin_popcount()
    // ==========================

    int n = 13;

    cout << __builtin_popcount(n) << endl;
    // 3

    /*
    13 = 1101
         ^^^
         3 set bits
    */

    // long long

    long long m = 15;

    cout << __builtin_popcountll(m) << endl;
    // 4

    /*
    15 = 1111
         4 set bits
    */

    // ==========================
    // next_permutation()
    // ==========================

    string s = "123";

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    /*
    123
    132
    213
    231
    312
    321
    */

    // ==========================
    // max_element()
    // ==========================

    vector<int> a = {5,2,9,1};

    cout << *max_element(a.begin(), a.end()) << endl;
    // 9

    // ==========================
    // min_element()
    // ==========================

    cout << *min_element(a.begin(), a.end()) << endl;
    // 1

    // ==========================
    // reverse()
    // ==========================

    reverse(a.begin(), a.end());

    for(int x : a)
        cout << x << " ";
    cout << endl;
    // 1 9 2 5
}

int main(){

    explain_algorithms();

    return 0;
}

/*

Important STL Algorithms
------------------------

sort()
reverse()
next_permutation()
max_element()
min_element()

Bit Manipulation
----------------

__builtin_popcount(int)
__builtin_popcountll(long long)

Comparator
----------

greater<int>()
Custom Comparator

Time Complexity
---------------

sort()                  -> O(n log n)
reverse()               -> O(n)
next_permutation()      -> O(n)
max_element()           -> O(n)
min_element()           -> O(n)

__builtin_popcount()    -> O(number of bits)
__builtin_popcountll()  -> O(number of bits)

*/