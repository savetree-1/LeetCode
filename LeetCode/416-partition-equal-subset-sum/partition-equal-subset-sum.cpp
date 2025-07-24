class Solution {
public:
    bool func(vector<int>&arr,int sum)
    {
        int n=arr.size();
        vector<vector<bool>>dp(n,vector<bool>(sum+1,false));
        for(int i=0;i<n;i++)dp[i][0]=true;
        if(arr[0]<=sum)dp[0][arr[0]]=true;
        for(int i=1;i<n;i++)
        {
            for(int k=1;k<=sum;k++)
            {
                bool npick=dp[i-1][k];
                bool pick=false;
                if(k>=arr[i])pick=dp[i-1][k-arr[i]];
                dp[i][k]=pick||npick;
            }
        }
        return dp[n-1][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2)return false;
        else return func(nums,sum/2);
    }
};