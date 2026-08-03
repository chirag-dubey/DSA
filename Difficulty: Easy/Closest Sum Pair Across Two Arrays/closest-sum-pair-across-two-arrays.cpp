class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        
        int n = arr1.size();
        int m = arr2.size();
        
        int i = 0;
        int j = m - 1;
        
        int minDiff = INT_MAX;
        int a = 0, b = 0;
        
        while(i < n && j >= 0) {
            
            int sum = arr1[i] + arr2[j];
            int diff = abs(sum - x);
            
            if(diff < minDiff) {
                minDiff = diff;
                a = arr1[i];
                b = arr2[j];
            }
            
            if(sum > x) {
                j--;          // decrease sum
            } 
            else {
                i++;          // increase sum
            }
        }
        
        return {a, b};
    }
};