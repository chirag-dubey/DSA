// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
                int m=arr[0].size();
        int p1=0,p2=m-1,c=0,ans=-1,p=-1;
        while((p1<arr.size())&&(p2>=0)){
            if(arr[p1][p2]==1){
            p=p1;
                p2--;
            }
            else if(arr[p1][p2]==0){
                p1++;
            }
        }
        return p;
    }
};