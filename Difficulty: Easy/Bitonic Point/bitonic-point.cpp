// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int g=0,f=0,n=arr.size();
        for(int i=0;i<n-1;++i){
            
            if((arr[i]>arr[i-1]&&arr[i]>arr[i+1])||(arr[i]<arr[i-1]&&arr[i]<arr[i+1])){
                return arr[i];
            } 
            if(arr[i+1]>arr[i]){
                g++;
            }
            else if(arr[i+1]<arr[i]){
                    f++;
                }
               
            }
            if(f==n-2){
                return arr[0];
            }
            return arr[n-2];
        }
};