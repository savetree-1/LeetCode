class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), islands = 0;
        vector<int> offsets = {0, 1, 0, -1, 0};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    dfs(grid, i, j, m, n, offsets);
                }
            }
        }
        return islands;
    }
    
private:
    void dfs(vector<vector<char>>& grid, int x, int y, int m, int n, vector<int>& offsets) {
        grid[x][y] = '0';
        for (int k = 0; k < 4; k++) {
            int nx = x + offsets[k], ny = y + offsets[k + 1];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == '1') {
                dfs(grid, nx, ny, m, n, offsets);
            }
        }
    }
};
