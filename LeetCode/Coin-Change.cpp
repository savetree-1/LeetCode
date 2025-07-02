/*
By    :: 
Used  :: Memoization
*/
class Solution {
public:
    int coinChange(vector<int>& coins, int amount){
        vector<int>dp(amount+1,-2);
        return helper(coins,amount,dp);
    }
    int helper(vector<int>&coins,int amt,vector<int>&dp)
    {
        if(amt==0)return 0;
        if(amt<0)return -1;
        if(dp[amt]!=-2)return dp[amt];
        int res=INT_MAX;
        for(int coin:coins)
        {
            int sub=helper(coins,amt-coin,dp);
            if(sub==-1)continue;
            res=min(res,sub+1);
        }
        return dp[amt]=(res==INT_MAX?-1:res);
    }
};