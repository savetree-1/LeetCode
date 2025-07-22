class Solution {
public:
    int func(int i,int j,int n,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        if(j<0 || j>=n)return INT_MAX;
        if(i==n-1)return matrix[i][j];
        if(dp[i][j]!=-101)return dp[i][j];
        int down=func(i+1,j,n,matrix,dp);
        int diaright=func(i+1,j+1,n,matrix,dp);
        int dialeft=func(i+1,j-1,n,matrix,dp);
        return dp[i][j]=matrix[i][j]+min({down,diaright,dialeft});
        }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            vector<vector<int>>dp(n,vector<int>(n,-101));
            int res=func(0,i,n,matrix,dp);
            mini=min(res,mini);
        }
        return mini;
    }
};