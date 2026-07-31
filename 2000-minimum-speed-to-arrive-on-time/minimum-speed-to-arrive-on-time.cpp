class Solution {
public:
    bool check(vector<int>& dist, int speed, double hour) {
        double time = 0;

        int n = dist.size();

        // First n-1 trains
        for (int i = 0; i < n - 1; i++) {
            time += ceil((double)dist[i] / speed);
        }

        // Last train (no waiting)
        time += (double)dist[n - 1] / speed;

        return time <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l = 1;
        int r = 10000000;
        int ans = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (check(dist, m, hour)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        return ans;
    }
};