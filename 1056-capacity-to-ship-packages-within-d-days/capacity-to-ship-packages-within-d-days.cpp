class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
         int start = 0, end = 0, mid=0, ans=0;
        for(int i=0;i<n;++i){
             start=max(start,weights[i]);
             end+=weights[i];
        }

       
        while(start <= end)
        {
      mid = start + (end-start)/2;

        int c = 1;
        int pages = 0;

       for(int i=0;i<n;i++)
       {
        pages += weights[i];

        if(pages > mid)
        {
            c++;
            pages = weights[i];
        }
      }

    if(c <= days)
    {
        ans = mid;
        end = mid - 1;
    }
    else
    {
        start = mid + 1;
    }
}
        return ans;
    }
};