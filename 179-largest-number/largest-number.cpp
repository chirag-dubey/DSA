class Solution {
public:
static bool Dsec(int s1,int s2){
    string f=to_string(s1)+to_string(s2);
    string s=to_string(s2)+to_string(s1);
    if(f>s){
        return true;
    }
    return false;
}
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),Dsec);
        string sum="";
        for( int i=0;i<nums.size();++i){
            sum+=to_string(nums[i]);
        }
        if(!sum.empty() && sum[0]=='0')
            return "0";
        return sum;
    }
};