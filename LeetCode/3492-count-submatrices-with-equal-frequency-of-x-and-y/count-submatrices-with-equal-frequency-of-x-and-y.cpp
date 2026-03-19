class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<pair<int,int>>> pre(n, vector<pair<int,int>>(m, {0,0}));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] == 'X') pre[i][j].first++;
                else if(grid[i][j] == 'Y') pre[i][j].second++;

                if(j > 0) {
                    pre[i][j].first += pre[i][j-1].first;
                    pre[i][j].second += pre[i][j-1].second;
                }
            }
        }

        for(int j = 0; j < m; j++) {
            for(int i = 1; i < n; i++) {
                pre[i][j].first += pre[i-1][j].first;
                pre[i][j].second += pre[i-1][j].second;
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(pre[i][j].first > 0 && pre[i][j].first == pre[i][j].second)
                    ans++;
            }
        }

        return ans;
    }
};