class Solution {
public:
    int solve(vector<int>&num,vector<int>&dp,int i)
    {
        if(i<0)return 0;
        if(i==0)return num[0];
        if(dp[i]!=-1)return dp[i];
        return dp[i]=max(solve(num,dp,i-1),solve(num,dp,i-2)+num[i]);
    }
    int rob(vector<int>& nums){
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,dp,n-1);
    }
};