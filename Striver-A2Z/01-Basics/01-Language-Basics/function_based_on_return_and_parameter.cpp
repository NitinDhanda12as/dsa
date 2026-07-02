#include<iostream>
using namespace std ;

// // void and non-parameterised function
// void print_name() {
//     cout << "Hey Nitin!! " ;
// }

// int main(){
//     print_name();
//     return 0;
// }



// // void and parametrised function 
// void print_name(string name) {
//     cout << "Hey " << name << endl ;
// }

// int main() {
//     string name;
//     cout << "Your Nmae plz : " ;
//     cin >> name ;
//     print_name(name) ;
// } 


// // void and parameterized 
// void sum(int num1 , int num2) {
//     int num3 = num1 + num2 ;
//     cout << num3 << endl ;
// }

// int main() {
//     int num1 , num2 ;
//     cout << "Enter num1 and num2 : " ;
//     cin >> num1 >> num2;
//     sum(num1 , num2) ;
// }


// // return and non-parameterized
// string print_name() {
//     return "Hey Nitin" ;
// }

// int main() {
//     string greeting = print_name() ;
//     cout << greeting << endl ;
// }



// return and parameterized 
int sum(int num1 , int num2) {
    int num3 = num1 + num2 ;
    return num3 ;
}

int main() {
    int num1 , num2 ;
    cout << "Enter num1 and num2 : " ;
    cin >> num1 >> num2;
    int res = sum(num1 , num2) ;
    cout << res << endl ;
}