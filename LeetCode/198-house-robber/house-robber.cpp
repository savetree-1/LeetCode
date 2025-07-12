class Solution {
public:
    int func(vector<int>&nums,int i)
    {
        vector<int>dp(nums.size(),-1);
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
        int pick=nums[i];
        if(i>1)pick+=dp[i-2];
        int not_pick=dp[i-1];
        dp[i]=max(pick,not_pick);}
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        //vector<int>dp(n+1,-1);
        return func(nums,n-1);
    }
};