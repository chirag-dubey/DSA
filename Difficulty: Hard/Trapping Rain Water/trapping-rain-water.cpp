class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        vector<int> a;
        vector<int> b;
        int n=arr.size();
        int c=arr[0];
        a.push_back(c);
        for(int i=1;i<n;++i){
            if(c>arr[i]){
                a.push_back(c);
            }
            else{
                a.push_back(arr[i]);
                c=arr[i];
            }
        }
        
        c=arr[n-1];
        b.push_back(c);
        for(int i=n-2;i>=0;--i){
            if(c>arr[i]){
                b.push_back(c);
            }else{
                b.push_back(arr[i]);
                c=arr[i];
            }
        }
        int sum=0,v=0;
        for(int i=0;i<n;++i){
            v=min(a[i],b[n-1-i]);
            sum=abs(v-arr[i])+sum;
        }
        return sum;
    }
};