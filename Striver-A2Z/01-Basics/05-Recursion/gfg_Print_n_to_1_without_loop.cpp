class Solution {
  public:
    void printNos(int n) {
        // code here
        if( n < 1 ) return ;
        cout << n << " " ;
        
        printNos( n-1 ) ;

    }
};