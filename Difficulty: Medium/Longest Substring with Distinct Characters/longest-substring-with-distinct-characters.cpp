class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        
        int n = s.size();
    int p1 = 0, ans = 0;
    unordered_map<char, int> freq;

    for (int p2 = 0; p2 < n; ++p2) {
        freq[s[p2]]++;
        while (freq[s[p2]] > 1) {
            freq[s[p1]]--;
            p1++;
        }
        ans = max(ans, p2 - p1 + 1);
    }

    return ans;
    }
};
