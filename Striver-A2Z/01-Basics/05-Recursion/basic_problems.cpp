#include<bits/stdc++.h>
using namespace std ;

// void print_name( int i , int n , string name ) {
//     if( i > n ) return ;
//     cout << name << endl ;

//     print_name( i+1 , n , name) ;
// }


// void print_1_n( int i , int n  ) {
//     if( i > n ) return ;
//     cout << i << endl ;

//     print_1_n( i+1 , n ) ;
// }


// void print_n_1( int i , int n  ) {
//     if( i < 1 ) return ;
//     cout << i << endl ;

//     print_n_1( i-1 , n ) ;
// }


// void print_1_n_backtracking( int i , int n  ) {
//     if( i < 1 ) return ;

//     print_1_n_backtracking( i-1 , n ) ;
//     cout << i << endl ;
// }

void print_n_1_backtracking( int i , int n  ) {
    if( i > n ) return ;

    print_n_1_backtracking( i+1 , n ) ;
    cout << i << endl ;
}


int main() {


    // int n ;
    // string name ;
    // cout << "enter num and ur Name :  " ;
    // cin >> n >> name ;
    // print_name( 1, n , name );


    // int n ;
    // cout << "enter num : " ;
    // cin >> n ;
    // print_1_n( 1, n );

    // int n ;
    // cout << "enter num : " ;
    // cin >> n ;
    // print_n_1( n , n );

    // int n ;
    // cout << "enter num : " ;
    // cin >> n ;
    // print_1_n_backtracking( n , n );

    int n ;
    cout << "enter num : " ;
    cin >> n ;
    print_n_1_backtracking( 1 , n );
}