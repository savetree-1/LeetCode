class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int N1 = str1.size(), M1 = str2.size();
        vector<vector<int>> dp(N1 + 1, vector<int>(M1 + 1));

        for(int i = 1; i <= N1; ++i) {
            for(int j = 1; j <= M1; ++j) {
                if(str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        string scs;
        int i = N1, j = M1;
        while(i > 0 && j > 0) {
            if(str1[i - 1] == str2[j - 1]) {
                scs.push_back(str1[--i]);
                --j;
            } else if(dp[i - 1][j] > dp[i][j - 1]) {
                scs.push_back(str1[--i]);
            } else {
                scs.push_back(str2[--j]);
            }
        }
        while(i > 0) scs.push_back(str1[--i]);
        while(j > 0) scs.push_back(str2[--j]);

        reverse(scs.begin(), scs.end());
        return scs;
    }
};
