class Solution {
public:
    int func(vector<int>&nums,int i,int r){
        int n=r-i+1;
        if(n==0)return 0;
        if(n==1)return nums[i];
        vector<int>dp(n,0);
        dp[0]=nums[i];
        for(int j=1;j<n;j++){
            int pick=nums[j+i];
            if(j>1)pick+=dp[j-2];
            int not_p=dp[j-1];
            dp[j]=max(pick,not_p);
        } 
        return dp[n-1];
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        return max(func(nums,0,n-2),func(nums,1,n-1));
    }
};
