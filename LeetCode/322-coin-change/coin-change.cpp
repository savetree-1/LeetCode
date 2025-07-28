class Solution {
public:
    int coinChange(vector<int>& coins, int amt){
        vector<int>dp(amt+1,amt+1);
        dp[0]=0;
        for(int i=1;i<=amt;i++)
        {
            for(int coin:coins)
            {
                if(i-coin>=0)
                {
                    dp[i]=min(1+dp[i-coin],dp[i]);
                }
            }
        }
        if(dp[amt]>amt)return -1;
        return dp[amt];
    }
};