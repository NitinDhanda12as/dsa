#include<bits/stdc++.h>
using namespace std;

void explain_vector() {
    vector <int> a ;
    a.push_back(1) ;
    cout << a[0] << endl; // 1

    vector <pair<int,int> > b(5) ;
    b.push_back( {1,2} );    
    b.emplace_back(3,4);
    cout << b.size() << " "; // 7
    cout << b[5].first << " " << b[5].second << endl << b[6].first << " " << b[6].second << endl;// 1 2 3 4 

    vector <int> c(5,10) ;
    cout << *c.begin() << " ";//10
    cout << *--c.end() << " ";//10
    c.push_back(11);
    cout << *--c.end() << endl;//11

    vector <int> d(c) ;
    cout << *d.begin() << " ";//10
    cout << *--d.end() << endl;//11

    // traversal
    vector<int> e = {1,2,3,4,5} ;
    for( vector<int> :: iterator it = e.begin() ; it != e.end() ; it++ ) {
        cout << *it << " " ;//1 2 3 4 5
    }
    cout << endl;
    e.erase(e.begin());      // deletion
    for(auto it = e.begin() ; it != e.end() ; it++ ) {
        cout << *it << " " ;//2,3,4,5 as 1 is deleted
    }cout << endl;
    e.erase(e.begin() , e.begin()+2 );
    for(auto it : e ) {
        cout << it << " " ;//4,5
    }cout << endl;// these all 3 loops will work same 


    // insertion
    vector<int>f = {3,4,5};
    f.insert(f.begin() , 1); // {1,3,4,5}
    f.insert(f.begin() , 2 , 1); // {1,1,1,3,4,5}
    for(int i : f ){
        cout << i << " ";
    }cout << endl;

    //copy a vector into another 
    vector<int>x = {2,3,4};
    vector<int>y = {1,5};
    y.insert(y.begin()+1 , x.begin() , x.end() ) ;
    for(auto num : y ) {
        cout << num << " " ;//1 2 3 4 5
    }cout << endl;

    cout << "size is : " << y.size() << endl;//{5}
    y.pop_back();// x-> {1,2,3,4}
    for(auto num : y) {
        cout << num << " ";
    }cout << endl;
    y.clear();
    cout << y.empty() << endl;//yes cause we have cleared vector via x.clear()
    cout << x.empty() << endl;
}

int main() {
    explain_vector();
    return 0;
}