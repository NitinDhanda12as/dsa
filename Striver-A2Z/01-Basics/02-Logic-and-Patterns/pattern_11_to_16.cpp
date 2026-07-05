#include<iostream>
using namespace std ;

void pattern_11() {
    cout << "patterrn_11" << endl ;
    int n = 5;
    for( int i = 1 ; i <= n ; i++ ) {
        for( int j = 1 ; j <= i ; j++ ) {
            if( ( i + j ) % 2 == 0 ) {
                cout << "1" ;    
            }else {
                cout << "0" ;
            }
        }
        cout << endl ;
    }
}


void pattern_12() {
    cout << "pattern_11" << endl ;
    int n = 4 ;
    for( int i = 1 ; i <= n ; i++ ) {
        for( int j = 1 ; j <= i ; j++ ) {
            cout << j ;
        }
        for( int j = 1 ; j <= 2*(n - i) ; j++ ) {
            cout << " " ;
        }
        for( int j = i ; j >= 1 ; j-- ) {
        cout << j ;
        }
        cout << endl ;
    }
}


void pattern_13() {
    cout << "pattern_13" << endl ;
    int n = 5 ;
    int last_digit = 1 ;
    for( int i = 1 ; i <= n ; i++) {
        for( int j = last_digit ; j <= ( last_digit + i - 1 ) ; j++ ) {
            cout << j << " ";
        }last_digit += i ;
        cout << endl ;
    }
}


void pattern_14() {
    cout << "pattern_14" << endl ;
    int n = 5 ;
    for( int i = 0 ; i < n ; i++) {
        for( char ch = 'A' ; ch <= 'A' + i ; ch++ ) {
            cout << ch ;
        }
        cout << endl ;
    }
}


void pattern_15() {
    cout << "pattern_15" << endl ;
    int n = 4 ;
    for( int i = n ; i >= 0 ; i--) {
        for( char ch = 'A' ; ch <= 'A' + i ; ch++ ) {
            cout << ch ;
        }
        cout << endl ;
    }
}


void pattern_16() {
    cout << "pattern_16" << endl ;
    int n = 5 ;
    for( int i = 1 ; i <= n ; i++) {
        char ch = ( 'A' + i - 1 ) ;
        for( int j = 1 ; j <= i ; j++ ) {
            cout << ch ;
        }
        cout << endl ;
    }
}
   
int main() {
    pattern_11() ;
    cout << endl ;
    pattern_12() ;
    cout << endl ;
    pattern_13() ;
    cout << endl ;
    pattern_14() ;
    cout << endl ;
    pattern_15() ;
    cout << endl ;
    pattern_16() ;

    return 0 ;
}