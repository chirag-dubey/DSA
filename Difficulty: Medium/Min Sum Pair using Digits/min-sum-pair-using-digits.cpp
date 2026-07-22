class Solution {
public:
    string addStrings(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            ans += (sum % 10) + '0';
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int k = 0;
        while (k < ans.size() - 1 && ans[k] == '0')
            k++;

        return ans.substr(k);
    }

    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        string s1 = "", s2 = "";

        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0)
                s1 += arr[i] + '0';
            else
                s2 += arr[i] + '0';
        }

        return addStrings(s1, s2);
    }
};