class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> hm;
        int i=0,j=0,n=cards.size(),ans=INT_MAX;
        while(j<n){
          hm[cards[j]]++;
          while(hm[cards[j]]==2){
            ans=min(ans,j-i+1);
            hm[cards[i]]--;
            i++;
          }
          j++;
        }

       if(ans==INT_MAX){
        return -1;
       }
       return ans;
    }
};