class Solution {
public:
    long long sumOfDivisors(long long n) {

        long long sum = 0;

        for (long long i = 1; i <= n; i++) {
            for (long long j = 1; j <= sqrt(i) ; j++) {
                if (i % j == 0){
                    sum += j;
                    if(j != i/j) {
                        sum+= i/j ;
                    }    
                }    
            }
        }

        return sum;
    }
};