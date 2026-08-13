class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int ans=INT_MAX, n=arr.size();
        for(int i=0;i<n;++i){
            int size=arr[i].size();
            ans=min(ans,size);
        }
        string res="";
        char val;
        for(int i=0;i<ans;++i){
            for(int j=0;j<n;++j){
                val=arr[0][i];
                if(val!=arr[j][i]){
                    return res;
                }
            }
            res+=val;
        }
        return res;
    }
};