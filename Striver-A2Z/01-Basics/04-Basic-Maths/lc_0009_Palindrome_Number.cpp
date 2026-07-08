class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0 ;
        int original = x ;
        if( x < 0 ) {
            return false ;
        }else {
            while( x != 0 ) {
                int digit = x % 10 ;
                reverse = reverse*10 + digit ;
                x = x/10 ;
            }
            return reverse == original ;
        }
    }
};