class Solution {
public:
    int change(int amt, vector<int>& coins) {
        vector<vector<unsigned long long>> dp(coins.size(), vector<unsigned long long>(amt + 1, 0));

        for(int i = 0; i <= amt; i++) {
            if(i % coins[0] == 0) dp[0][i] = 1;
        }

        for(int i = 1; i < coins.size(); i++) {
            for(int j = 0; j <= amt; j++) {
                unsigned long long nottake = dp[i - 1][j];
                unsigned long long take = 0;
                if(j >= coins[i]) take = dp[i][j - coins[i]];
                dp[i][j] = take + nottake;
            }
        }

        return dp[coins.size() - 1][amt];
    }
};
