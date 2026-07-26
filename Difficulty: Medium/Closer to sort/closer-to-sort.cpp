class Solution {
  public:
    int closer(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
         int low=0;
        int high=arr.size()-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            
            if(arr[mid]==x)
            return mid;
            
            else if(arr[mid]<x){
                if(mid-1>=0  && arr[mid-1]==x)
                return mid-1;
                else{
                    low=mid+1;
                }
            }
            
            else{
                 if(mid+1<n && arr[mid+1]==x)
                return mid+1;
                else{
                    high=mid-1;
                }
            }
        }
        
        return -1;
    }
};
