class Solution {
public:
   bool check(vector<int>& nums, int m,int k){
    int c=1,p=0;
    for(int i=0;i<nums.size();++i){
         p=p+nums[i];
        if(p>m){
         c++;
         p=nums[i];
        }

    }
    if(c<=k) return true;
    else return false;
 }
     
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
      int  l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
       while(l<=r){
        int mid=l+(r-l)/2;
        if(check(nums,mid,k)){
           ans=mid;
           r=mid-1;
        }
        else{
            l=mid+1;
        }
       }
    return ans;
    }
    
};