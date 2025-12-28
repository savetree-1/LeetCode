class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = 0;
        int col = 0;
        int tot = 0;
        int m = grid.size();
        int n = grid[0].size();

        while (col < n && grid[row][col] >= 0) {
            col++;
        }

        tot += (n - col) * m;
        row++;

        col--;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                tot += (m - row);
                col--;
            } else {
                row++;
            }
        }

        return tot;
    }
};
