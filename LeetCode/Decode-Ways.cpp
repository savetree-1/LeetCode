class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n + 1, 0);
        dp[n] = 1; // Base case: empty string has 1 way

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == '0') dp[i] = 0; // Can't decode a '0' alone
            else {
                dp[i] = dp[i + 1]; // Take one digit

                if(i + 1 < n && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')))
                    dp[i] += dp[i + 2]; // Take two digits if valid
            }
        }

        return dp[0]; // Ways to decode full string starting from index 0
    }
};
