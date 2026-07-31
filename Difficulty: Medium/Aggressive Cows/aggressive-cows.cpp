class Solution {
  public:
  
   bool check(vector<int> stalls,int m,int k){
       int lcow=stalls[0],cc=1;
       for(int i=1;i<stalls.size();++i){
           if(stalls[i]-lcow>=m){
               lcow=stalls[i];
               cc++;
           }
       }
       if(cc<k) return false;
       return true;
   }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size(),ans=0;
        sort(arr.begin(),arr.end());
        int l=1,r=arr[n-1]-arr[0];
        
        while(l<=r){
            int m=l+(r-l)/2;
            if(check(arr,m,k)){
                ans=m;
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return ans;
    }
};