class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int m=tri.size();
        vector<int>prev(m,0);
        for(int i=0;i<m;i++)prev[i]=tri[m-1][i];
        for(int i=m-2;i>=0;i--)
        {
            vector<int>curr(m,0);
            for(int j=i;j>=0;j--)
            {
                curr[j]=tri[i][j]+min(prev[j+1],prev[j]);
            }
            prev=curr;
        }
        return prev[0];
    }
};