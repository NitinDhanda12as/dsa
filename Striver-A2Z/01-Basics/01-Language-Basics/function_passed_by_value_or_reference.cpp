#include<iostream>
using namespace std;

// //Pass by value , eg of int
// void increment(int num) {
    // num += 1;
    // cout << num << endl ;
// }
// int main() {
    // int num;
    // cout << "Enter the number : " ;
    // cin >> num ;
    // increment(num);   // incremeted by 1
    // cout << num << endl ;   // still gives original value rather than incremented cause only copy of original value was sent to function , not original itself so original stay same.
    // return 0;
// }


// //pass by value, eg of string
// void name_changing(string s) {
    // s[0] = 'T' ;
    // cout << s << endl ;
// }
// int main() {
    // string s = "Raj" ;
    // cout << s << endl ;
    // name_changing(s) ;
    // cout << s << endl ;
    // return 0 ;
// }



// //pass by reference
void name_changing(string &s) {
    s[0] = 'T' ;
    cout << s << endl ; // prints Taj and goes to 43
}
int main() {            // starts here
    string s = "Raj" ;
    cout << s << endl ; // prints Raj
    name_changing(s) ;  // goes to 35
    cout << s << endl ; //still prints Taj cause we passed by reference means original rather than a copy so it stayed channge simce we change the original once
    return 0 ;
}