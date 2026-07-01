#include<iostream>
using namespace std ; 

int main() {
    int age ;
    cout << "Plzz enter ur age " ;
    cin >> age ;

    // if ( age < 18 ) {
    //     cout << "not eligible for job" << endl ;
    // }
    // else if ( age <= 54 ) {
    //     cout << "eligible for job" << endl ;
    // }
    // else if ( age <= 57 ) {
    //     cout << "eligible for job, but retirement soon" << endl ;
    // }
    // else if ( age > 57 ) {
    //     cout << "retirement time" << endl ;
    // }

    if ( age < 18 ) {
        cout << "not eligible for job" << endl ;
    }
    else if ( age <= 57 ) {
        cout << "eligible for job " << endl ;
        if ( age >= 55 ) {
            cout << " , but retirement soon " << endl ;
        }
    }
    else if ( age > 57 ) {
        cout << "retirement time" << endl ;
    }
    return 0;
}