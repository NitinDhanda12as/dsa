class Solution {
    
    //one way
    // void in_place_swap( int left , int right , vector<int> &arr) {
    //     if(left >= right) return ;
    //     swap(arr[left] , arr[right]);
    //     in_place_swap( left+1 , right-1 , arr);
        
    //     return ;
    // }
    
    //second way
    // void in_place_swap( int i , int n , vector<int> &arr) {
    //     if( i >= n-i ) return ;  // edge case of i >= n-i is i >= n/2 , so use any of them 
    //     swap(arr[i] , arr[n-i]);
    //     in_place_swap( i+1 , n , arr);
        
    //     return ;
    // }
    
    
  public:
    void reverseArray(vector<int> &arr) {
        // in-pace reversing using loop
        // int n = arr.size();
        // for(int i = 0 ; i < n/2 ; i++) {
        //     swap(arr[i] , arr[n-i-1]);
        // }
        
        // two pointer approach 
        // int left = 0 , right = arr.size()-1 ;
        // while( left < right ) {
        //     swap(arr[left++] , arr[right--]);
        // }
        
        // STL Standard 
        // void reverseArray(vector<int> &arr) {
        // reverse(arr.begin(), arr.end());
        
        //using recursion (anyone from one or second way)
        in_place_swap( 0 , arr.size()-1 , arr ) ;
        
    }
};