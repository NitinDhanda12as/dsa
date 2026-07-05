#include<iostream>
using namespace std ;
 

void pattern_17() {
    cout << "pattern_17" << endl ;
    int n = 4 ;
    for( int i = 0 ; i < n ; i++ ) {

        for( int j = 1 ; j <= (n-i-1) ; j++) {
            cout << " " ;               
        }

        for( char ch = 'A' ; ch <= ( 'A' + i ) ; ch++) {
            cout << ch ;               
        }

        for( char ch = ( 'A' + i - 1) ; ch >= 'A' ; ch-- ) {
            cout << ch ;
        }
        
        cout << endl ;
    }
    cout << endl ;
}



// void pattern_18() {
//     cout << "pattern_18" << endl ;
//     int n = 5 ;
//     for( int i = n ; i >= 1 ; i-- ) {
//         for( int j = 1 ; j <= (n - i + 1) ; j++ ) {
//             char ch = ( 'A' + i - 2 + j ) ;
//             cout << ch ;
//         }
//         cout << endl ;
//     }
// }
   
void pattern_18() {
    cout << "pattern_18" << endl ;
    int n = 5 ;
    for( int i = 0 ; i < n ; i++ ) {
        for( char ch = 'E' - i ; ch <= 'E' ; ch++ ) {
            cout << ch ;
        }
        cout << endl ;
    }
}


void pattern_19() {
    cout << "pattern_19" << endl ;
    int n = 10 ;
    // int k ;
    for( int i = 0 ; i < n ; i++ ) {
        // if( i < n/2 ) {
        //     k = i ;
        // }    
        // else{
        //     k = n-1-i ;
        // } 
        int k = min ( i , n-i-1 ) ;
        for( int j = 0 ; j < n-k-5 ; j++ ){
            cout << "*" ;
        }

        for( int j = 0 ; j < 2*k ; j++ ) {
            cout << " " ;
        }

        for( int j = 0 ; j < n-k-5 ; j++ ){
            cout << "*" ;
        }
        cout << endl ;
    }
}


void pattern_20() {
    cout << "pattern_20" << endl ;
    int n = 5 ;
    for( int i = 0 ; i < 2*n-1 ; i++ ) {
        int k = min ( i , 2*n-i-2 ) ;
        
        for( int j = 0 ; j < k+1  ; j++ ){
            cout << "*" ;
        }

        for( int j = 0 ; j < 2*(n-k-1) ; j++ ) {
            cout << " " ;
        }

        for( int j = 0 ; j < k+1 ; j++ ){
            cout << "*" ;
        }
        cout << endl ;
    }
}


// void pattern_21() {
//     cout << "pattern_21" << endl ;
//     int n = 4 ;
//     for( int i = 0 ; i < n ; i++ ) {
//         if( i == 0 || i == n-1 ) {
//             for( int j = 0 ; j < n ; j++ ) {
//                 cout << "*" ;
//             }
//         }else {
//             cout << "*" ;
//             for( int j = 0 ; j < n-2 ; j++ ) {
//                 cout << " " ;
//             }
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
// }


void pattern_21() {
    cout << "pattern_21" << endl ;
    int n = 4 ;
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            if( i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "*" ;
            }else {
            cout << " " ;
            } 
        } 
        cout << endl ;
    }
}



void pattern_22() {
    cout << "pattern_22" << endl;

    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));

            cout << n - layer << " ";
        }

        cout << endl;
    }
}


// void pattern_22() {
//     cout << "pattern_22" << endl ;
//     int n = 4 ;
//     for( int i = 0 ; i < 2*n-1 ; i++ ) {
//         for( int j = 0 ; j < 2*n-1 ; j++ ) {
//             if( i == 0 || i == 2*n-2 || j == 0 || j == 2*n-2 ){
//                 cout << n ;
//             }else if(i == 1 || i == 2*n-3 || j == 1 || j == 2*n-3 ) {
//                 cout << n-1 ;
//             }else if(i == 2 || i == 2*n-4 || j == 2 || j == 2*n-4  ) {
//                 cout << n-2 ;
//             }else if(i == 3 || i == 2*n-5 || j == 3 || j == 2*n-5 ) {
//                 cout << n-3 ;
//             }else {
//                 cout << " " ;
//             }
//         } 
//         cout << endl ;
//     }
// }


int main() {
    pattern_17() ;
    cout << endl ;
    pattern_18() ;
    cout << endl ;
    pattern_19() ;
    cout << endl ;
    pattern_20() ;
    cout << endl ;
    pattern_21() ;
    cout << endl ;
    pattern_22() ;

    return 0 ;
}