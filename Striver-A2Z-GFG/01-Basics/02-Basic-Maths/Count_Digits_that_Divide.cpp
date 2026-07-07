class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int original_num = n;
        int count = 0 ;
        while(n != 0 ) {
            int last_digit = n % 10 ;
            if(last_digit != 0 && original_num % last_digit == 0) count++ ;
            n = n/10 ;
        }
        return count;
    }
};