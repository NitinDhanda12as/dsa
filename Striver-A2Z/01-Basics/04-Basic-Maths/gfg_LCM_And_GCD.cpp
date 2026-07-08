class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector<int>ans;
        int lcm = max(a,b) ;
        while(lcm%a != 0 || lcm%b != 0 ) {
            lcm = lcm+max(a,b) ;
        }
        ans.push_back(lcm) ;
        
        int gcd ;
        for(int gcd = min(a,b) ; gcd >= 1 ; gcd--) {
            if( a % gcd  == 0 && b % gcd == 0) {
                ans.push_back(gcd) ;
                break ;
            }
        }
        
        return ans ;
    }
};