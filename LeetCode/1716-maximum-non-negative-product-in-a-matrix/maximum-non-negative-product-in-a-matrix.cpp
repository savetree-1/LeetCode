class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        long long mod = 1e9 + 7;

        vector<vector<long long>> dpMax(n, vector<long long>(m));
        vector<vector<long long>> dpMin(n, vector<long long>(m));

        dpMax[0][0] = dpMin[0][0] = grid[0][0];

        for(int i = 1; i < n; i++){
            dpMax[i][0] = dpMin[i][0] = dpMax[i-1][0] * grid[i][0];
        }

        for(int j = 1; j < m; j++){
            dpMax[0][j] = dpMin[0][j] = dpMax[0][j-1] * grid[0][j];
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                long long val = grid[i][j];

                long long a = dpMax[i-1][j] * val;
                long long b = dpMin[i-1][j] * val;
                long long c = dpMax[i][j-1] * val;
                long long d = dpMin[i][j-1] * val;

                dpMax[i][j] = max(max(a, b), max(c, d));
                dpMin[i][j] = min(min(a, b), min(c, d));
            }
        }

        long long res = dpMax[n-1][m-1];
        if(res < 0) return -1;
        return res % mod;
    }
};