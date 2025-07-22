class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix){
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)dp[n-1][i]=matrix[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for (int j=n-1;j>=0;j--)
            {
                int down=dp[i+1][j];
                int left=(j>0)?dp[i+1][j-1]:INT_MAX;
                int right=(j<n-1)?dp[i+1][j+1]:INT_MAX;
                dp[i][j]=matrix[i][j]+min({down,left,right});
            }
        }
        return *min_element(dp[0].begin(),dp[0].end());
    }
};