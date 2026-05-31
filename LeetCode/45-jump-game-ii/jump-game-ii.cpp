class Solution {
public:
    int rec(int idx,vector<int>&nums,vector<int>&dp)
    {
        int n=nums.size();
        if(idx>=n-1)return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int mini=1e9;
        int jump=1;
        while(jump<=nums[idx])
        {
            mini=min(mini,1+rec(jump+idx,nums,dp));
            jump++;
        }
        return dp[idx]=mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return rec(0,nums,dp);
    }
};


