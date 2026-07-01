#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks ;
    cout << "Plzz enter ur marks " ;
    cin >> marks ;

    if ( marks < 25 ) {
        cout << "u got F" << endl ;
    }
    else if ( marks <= 44 ) {
        cout << "u got E" << endl ;
    }
    else if ( marks <= 49 ) {
        cout << "u got D" << endl ;
    }
    else if ( marks <= 59 ) {
        cout << "u got C" << endl ;
    }
    else if ( marks < 79 ) {
        cout << "u got B" << endl ;
    }
    else if ( marks < 100 ) {
        cout << "A" << endl ;
    }

    return 0 ;

}