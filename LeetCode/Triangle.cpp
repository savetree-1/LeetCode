class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int m=tri.size();
        vector<vector<int>>dp(m,vector<int>(m,INT_MAX));
        for(int j=0;j<m;j++)
        {
            dp[m-1][j]=tri[m-1][j];
        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                dp[i][j]=tri[i][j]+min(dp[i+1][j+1],dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};