class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const int MOD = 1e9 + 7; // Use modulo to prevent overflow
        vector<unsigned long long> dp(amount + 1, 0);
        dp[0] = 1;
        for(int coin : coins) {
            for(int i = coin; i <= amount; i++) {
                dp[i] = (dp[i] + dp[i - coin]);
            }
        }
        return dp[amount];
    }
};
