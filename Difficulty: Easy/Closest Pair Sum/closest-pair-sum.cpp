class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {

        sort(arr.begin(), arr.end());

        int l = 0, r = arr.size() - 1;
        int bestDiff = INT_MAX;
        vector<int> ans;

        while (l < r) {

            int sum = arr[l] + arr[r];
            int diff = abs(target - sum);

            if (diff < bestDiff) {
                bestDiff = diff;
                ans = {arr[l], arr[r]};
            }

            if (sum < target)
                l++;
            else if (sum > target)
                r--;
            else
                return ans;
        }

        return ans;
    }
};