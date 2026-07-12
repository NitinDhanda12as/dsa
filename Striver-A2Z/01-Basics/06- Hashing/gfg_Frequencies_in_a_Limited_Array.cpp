class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> occurance( n , 0 );
        for( int i = 0 ; i < n ; i++ ) {
            occurance[arr[i]-1]++ ;
        }
        return occurance ;
    }
};
