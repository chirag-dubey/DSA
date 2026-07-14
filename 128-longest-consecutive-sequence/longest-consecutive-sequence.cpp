class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
    unordered_set<int> hs;
    for(int i=0;i<nums.size();++i){
        hs.insert(nums[i]);
    }
    int ans=0;
    for(int ele:hs){
        if(hs.find(ele-1)==hs.end()){
            int s=0,c=0;
            s=ele;
            while(hs.find(s)!=hs.end()){
                s++;
                c++;
            }
 ans =max(c,ans);
        }
       
    }
    return ans;
    
    }
};