class Solution {
public:
    int dp[1001][1001]; // assuming max length of strings ≤ 1000

    int lcs(string &a, string &b, int i, int j) {
        if(i == 0 || j == 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(a[i - 1] == b[j - 1])
            return dp[i][j] = 1 + lcs(a, b, i - 1, j - 1);
        else
            return dp[i][j] = max(lcs(a, b, i - 1, j), lcs(a, b, i, j - 1));
    }

    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        return lcs(text1, text2, text1.size(), text2.size());
    }
};
