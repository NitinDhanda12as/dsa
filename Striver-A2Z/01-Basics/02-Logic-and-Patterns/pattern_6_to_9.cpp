#include<iostream>
using namespace std ;
 

void pattern_6() {
    int i , j ;
    cout << "pattern_6" << endl ;
    for( i = 5 ; i >= 1 ; i-- ) {
        for( j = 1 ; j <= i ; j++ ) {
            cout << j  ;
        }
        cout << endl ;
    }
}


void pattern_7() {
    int i , k , l ;
    cout << "pattern_7" << endl ;
    for( i = 1 ; i <= 5 ; i++ ) {
        k = ( 5 - i ) ;
        while( k > 0 ) {
            cout << " " ;               
            k-- ;
        }

        l = ( i * 2 - 1 ) ;
        while( l > 0 ) {
            cout << "*" ;
            l-- ;
        }
        cout << endl ;
    }
    cout << endl ;
}


void pattern_8() {
    int i , k , l ;
    cout << "pattern_8" << endl ;
    for( i = 5 ; i >= 1 ; i-- ) {

        k = ( 5 - i ) ;
        while( k > 0 ) {
            cout << " " ;               
            k-- ;
        }

        l = ( i * 2 - 1 ) ;
        while( l > 0 ) {
            cout << "*" ;
            l-- ;
        }

        cout << endl ;
    }
    cout << endl ;
}


void pattern_9() {
    int i , j , k , l ;
    cout << "pattern_9" << endl ;
    for( i = 1 ; i <= 5 ; i++ ) {
        k = ( 5 - i ) ;
        while( k > 0 ) {
            cout << " " ;               
            k-- ;
        }

        l = ( i * 2 - 1 ) ;
        while( l > 0 ) {
            cout << "*" ;
            l-- ;
        }

        cout << endl ;
    }

    for( j = 5 ; j >= 1 ; j-- ) {

        k = ( 5 - j ) ;
        while( k > 0 ) {
            cout << " " ;               
            k-- ;
        }

        l = ( j * 2 - 1 ) ;
        while( l > 0 ) {
            cout << "*" ;
            l-- ;
        }

        cout << endl ;
    }
    cout << endl ;
}


int main() {
    pattern_6() ;
    cout << endl ;
    pattern_7() ;
    cout << endl ;
    pattern_8() ;
    cout << endl ;
    pattern_9() ;

    return 0 ;
}