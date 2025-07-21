class Solution {
public:
    int func(int i,int j,int m,vector<vector<int>>&tri,vector<vector<int>>&dp)
    {
        if(i==m-1)return tri[i][j];
        if(dp[i][j]!=INT_MAX)return dp[i][j];
        return dp[i][j]=tri[i][j]+min(func(i+1,j,m,tri,dp),func(i+1,j+1,m,tri,dp));
    }
    int minimumTotal(vector<vector<int>>& tri) {
        int m=tri.size();
        int n=tri[m-1].size();
        vector<vector<int>>dp(m,vector<int>(n,INT_MAX));
        return func(0,0,m,tri,dp);
    }
};