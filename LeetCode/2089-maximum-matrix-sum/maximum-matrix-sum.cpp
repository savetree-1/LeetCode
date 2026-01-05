class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int cols=matrix[0].size();
        int rows=matrix.size();
        long long sum=0;
        int cnt;
        long long mini=INT_MAX;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]<0)
                {
                    cnt++;
                }
                sum+=llabs(matrix[i][j]);
                mini=min(mini,llabs(matrix[i][j]));
            }
        }
        if(cnt%2==0)return sum;
        return 1LL*(sum-2*mini);

    }
};