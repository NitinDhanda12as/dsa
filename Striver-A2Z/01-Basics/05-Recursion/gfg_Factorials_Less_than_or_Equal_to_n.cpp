class Solution {
    vector<long long>factorial;
    void print_factorial( long long current_val , long long next_multiplier , long long n) {
            if(current_val > n ) return ;

            factorial.push_back(current_val);
            print_factorial( current_val*next_multiplier, next_multiplier+1 , n) ;
        }
        
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        print_factorial( 1 , 2 , n) ;
        return factorial ;
    }
};