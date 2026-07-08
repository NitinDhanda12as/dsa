class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num = n ;
        int sum_of_cubes = 0 ;
        while( num!= 0) {
            int digit = num%10 ;
            sum_of_cubes += digit*digit*digit ;
            num /= 10 ;
        }
        return sum_of_cubes == n ; 
    }
};