class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        
        unordered_set<int> hs1;
        unordered_set<int> hs2;
        vector<int> v;
        for(int i=0;i<a.size();++i){
            hs1.insert(a[i]);
        }
        for(int i=0;i<b.size();++i){
            if(hs1.find(b[i])!=hs1.end()){
                hs2.insert(b[i]);
               // v.push_back(b[i]);
            }
        }
        for(int ele:hs2){
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        return v;
    }
};