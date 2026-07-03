#include<iostream>
using namespace std ;
 

void pattern_1() {
    int i , j ;
    cout << "pattern_1" << endl ;
    for( i = 0 ; i <= 4 ; i++ ) {
        for( j = 0 ; j <= 4 ; j++ ) {
            cout << "*"  ;
        }
        cout << endl ;
    }
}


void pattern_2() {
    cout << "pattern_2" << endl ;
    int i , j ;
    for( i = 0 ; i < 5 ; i++ ) {
        for( j = 0 ; j <= i ; j++ ) {
            cout << "*" ;
        }
        cout << endl ;
    }
}


void pattern_3() {
    cout << "pattern_3" << endl ;
    int i , j ;
    for( i = 1 ; i <= 5 ; i++ ) {
        for( j = 1 ; j <= i ; j++ ) {
            cout << j ;
        }
        cout << endl ;
    }
}


void pattern_4() {
    cout << "pattern_4" << endl ;
    int i , j ;
    for( i = 1 ; i <= 5 ; i++ ) {
        for( j = 1 ; j <= i ; j++ ) {
            cout << i ;
        }
        cout << endl ;
    }
}

void pattern_5() {
    cout << "pattern_5" << endl ;
    int i , j ;
    for( i = 5 ; i >= 1 ; i-- ) {
        for( j = 1 ; j <= i ; j++ ) {
            cout << "*" ;
        }
        cout << endl ;
    }
}


int main() {
    pattern_1() ;
    cout << endl ;
    pattern_2() ;
    cout << endl ;
    pattern_3() ;
    cout << endl ;
    pattern_4() ;
    cout << endl ;
    pattern_5() ;

    return 0 ;
}