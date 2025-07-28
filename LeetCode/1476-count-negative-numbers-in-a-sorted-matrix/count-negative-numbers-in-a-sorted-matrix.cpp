class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int rows=grid.size();
        int cols=grid[0].size();
        int i=rows-1;
        int j=0;
        while(i>=0 && j<cols)
        {
            if(grid[i][j]<0)
            {
                cnt+=cols-j;
                i--;
            }
            else
            j++;
        }
        return cnt;
    }
};