class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        vector<vector<double>> dp(101, vector<double>(101, 0.0));
        dp[0][0] = poured;
        
        for(int row = 0; row < 100; row++) {
            for(int col = 0; col <= row; col++) {
                if(dp[row][col] > 1.0) {
                    double extra = (dp[row][col] - 1.0) / 2.0;
                    dp[row + 1][col] += extra;
                    dp[row + 1][col + 1] += extra;
                    dp[row][col] = 1.0;
                }
            }
        }
        
        return min(1.0, dp[query_row][query_glass]);
    }
};
