class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int fresh=0, count=0;
        queue<pair<int,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) fresh++;
            }
        }

        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,-1,1};

        while(!q.empty() && fresh>0){
            int size=q.size();
            while(size--){
                auto [x,y]=q.front(); q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }
            count++;
        }
        return fresh==0 ? count : -1;
    }
};
