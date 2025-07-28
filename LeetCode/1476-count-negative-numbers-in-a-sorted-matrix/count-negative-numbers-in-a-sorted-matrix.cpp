class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++)
        {
            int low=0;
            int high=cols-1;
            int ans=cols;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(grid[i][mid]<0)
                {
                    ans=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            cnt+=cols-ans;
        }
        return cnt;
    }
};