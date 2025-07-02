/*
By   :: savetrees
Used :: Memoized
*/
class Solution {
public:
    int minCost(int n, vector<int>& cuts)
    {
        cuts.push_back(0);cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(cuts.size(),vector<int>(cuts.size(),-1));
        return helper(cuts,0,cuts.size()-1,dp);
    }
    int helper(vector<int>&cuts,int i,int j,vector<vector<int>>&dp)
    {
        if(i+1==j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int cost=INT_MAX;
        for(int k=i+1;k<j;k++)
        {
            int left=helper(cuts,i,k,dp);
            int right=helper(cuts,k,j,dp);
            cost=min(cost,cuts[j]-cuts[i]+left+right);
        }
        return dp[i][j]=cost;
    }
};