class Solution {
public:
    int solve(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i==0)return dp[0]=nums[0];
        if(dp[i]!=INT_MIN)return dp[i];
        int prev=solve(nums,i-1,dp);
        return dp[i]=max(nums[i],nums[i]+prev);
    }
    int maxSubArray(vector<int>& nums) {
        vector<int>dp(nums.size(),INT_MIN);
        int res=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            res=max(res,solve(nums,i,dp));
        }
        return res;
    }
};