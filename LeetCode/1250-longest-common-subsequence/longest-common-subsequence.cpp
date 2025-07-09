class Solution {
public:
    vector<vector<int>> dp;

    int solve(const string& text1, const string& text2, int i, int j) {
        if (i == 0 || j == 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        if (text1[i - 1] == text2[j - 1])
            dp[i][j] = 1 + solve(text1, text2, i - 1, j - 1);
        else
            dp[i][j] = max(solve(text1, text2, i - 1, j), solve(text1, text2, i, j - 1));

        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        dp.assign(m + 1, vector<int>(n + 1, -1));
        return solve(text1, text2, m, n);
    }
};
