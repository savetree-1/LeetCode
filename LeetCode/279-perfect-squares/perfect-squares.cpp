class Solution {
public:
    int numSquares(int n) {
        vector<int>nums;
        for(int i=1;i*i<=n;i++)
        {
            nums.push_back(i*i);        
        }
        vector<int>dp(n+1,n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int num:nums)
            {
                if(i-num>=0)dp[i]=min(dp[i],1+dp[i-num]);
            }
        }
        return dp[n]>n?-1:dp[n];
    }
};