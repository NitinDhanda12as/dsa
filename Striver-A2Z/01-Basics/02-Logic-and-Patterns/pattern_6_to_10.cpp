#include<iostream>
using namespace std ;
 

void pattern_6() {
    int i , j ;
    cout << "pattern_6" << endl ;
    for( i = 5 ; i >= 1 ; i-- ) {       //or for( i = 1 ; i <= 5 ; i++ ) {
        for( j = 1 ; j <= i ; j++ ) {   //       for( j = 1 ; j <= ( 5 - i + 1) ; j++ ) {
            cout << j  ;                //           cout << j ;
        }                               //       }
        cout << endl ;                  //       cout << endl ;
    }                                   //   }
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

//can use for loop instead of while if wants , below is example for patter_7 
// void pattern_7() {
//     cout << "pattern_7" << endl ;
//     int n = 5 ;
//     for( int i = 1 ; i <= n ; i++ ) {

//         for( int j = 1 ; j <= (n-i) ; j++) {
//             cout << " " ;               
//         }

//         for( int j = 1 ; j <= ( i * 2 - 1 ) ; j++) {
//             cout << "*" ;               
//         }
        
//         cout << endl ;
//     }
//     cout << endl ;
// }


void pattern_8() {
    int n = 5 ;
    cout << "pattern_8" << endl ;
    for( int i = 5 ; i >= 1 ; i-- ) {

        for( int j = 1 ; j <= (5-i) ; j++) {
            cout << " " ;               
        }

        for( int j = 1 ; j <= ( i * 2 - 1 ) ; j++) {
            cout << "*" ;               
        }
        
        cout << endl ;
    }
    cout << endl ;
}

// while method
// void pattern_8() {
//     int i , k , l ;
//     cout << "pattern_8" << endl ;
//     for( i = 5 ; i >= 1 ; i-- ) {

//         k = ( 5 - i ) ;
//         while( k > 0 ) {
//             cout << " " ;               
//             k-- ;
//         }

//         l = ( i * 2 - 1 ) ;
//         while( l > 0 ) {
//             cout << "*" ;
//             l-- ;
//         }

//         cout << endl ;
//     }
//     cout << endl ;
// }


// combination of pattern 7 and 8 in sequence 
void pattern_9() {
    cout << "pattern_9" << endl ;
    int n = 5 ;

    for( int i = 1 ; i <= n ; i++ ) {

        for( int j = 1 ; j <= (n-i) ; j++) {
            cout << " " ;               
        }

        for( int j = 1 ; j <= ( i * 2 - 1 ) ; j++) {
            cout << "*" ;               
        }
        
        cout << endl ;
    }

    for( int i = 5 ; i >= 1 ; i-- ) {

        for( int j = 1 ; j <= (5-i) ; j++) {
            cout << " " ;               
        }

        for( int j = 1 ; j <= ( i * 2 - 1 ) ; j++) {
            cout << "*" ;               
        }
        
        cout << endl ;
    }

    cout << endl ;
}

// while method
// void pattern_9() {
//     int i , j , k , l ;
//     cout << "pattern_9" << endl ;
//     for( i = 1 ; i <= 5 ; i++ ) {
//         k = ( 5 - i ) ;
//         while( k > 0 ) {
//             cout << " " ;               
//             k-- ;
//         }

//         l = ( i * 2 - 1 ) ;
//         while( l > 0 ) {
//             cout << "*" ;
//             l-- ;
//         }

//         cout << endl ;
//     }

//     for( j = 5 ; j >= 1 ; j-- ) {

//         k = ( 5 - j ) ;
//         while( k > 0 ) {
//             cout << " " ;               
//             k-- ;
//         }

//         l = ( j * 2 - 1 ) ;
//         while( l > 0 ) {
//             cout << "*" ;
//             l-- ;
//         }

//         cout << endl ;
//     }
//     cout << endl ;
// }

// void pattern_10() {
//     cout << "pattern_10" << endl ;
//     int n = 5;
//     int k ;
//     for( int i = 1 ; i <= (2*n - 1) ; i++ ) {
//         if( i <= n ) {
//             k = i ;  
//         }else{
//             k = ( 2*n - i );
//         }
//         for( int j = 1 ; j <= k ; j++ ) {
//                 cout << "*" ;
//             }
//         cout << endl ;
//     }
// }
//or
void pattern_10() {
    cout << "pattern_10" << endl ;
    int n = 5;
    for( int i = 1 ; i <= (2*n - 1) ; i++ ) {
        int k = min( i , 2*n - i ) ;
        for( int j = 1 ; j <= k ; j++ ) {
                cout << "*" ;
            }
        cout << endl ;
    }
}


int main() {
    pattern_6() ;
    cout << endl ;
    pattern_7() ;
    cout << endl ;
    pattern_8() ;
    cout << endl ;
    pattern_9() ;
    cout << endl ;
    pattern_10() ;

    return 0 ;
}