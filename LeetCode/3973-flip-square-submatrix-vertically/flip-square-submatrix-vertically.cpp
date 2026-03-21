class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int end = x + k - 1;
        for(int i = x; i <= x + k/2 - 1; i++) {
            for(int j = y; j <= y + k - 1; j++) {
                grid[i][j] ^= grid[end - (i - x)][j];
                grid[end - (i - x)][j] ^= grid[i][j];
                grid[i][j] ^= grid[end - (i - x)][j];
            }
        }
        return grid;
    }
};