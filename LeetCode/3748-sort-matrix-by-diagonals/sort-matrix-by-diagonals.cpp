class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // bottom-left including main diagonal
        for(int i=0;i<n;i++){
            vector<int>diag;
            int r=i, c=0;
            while(r<n && c<n){
                diag.push_back(grid[r][c]);
                r++; c++;
            }
            sort(diag.begin(), diag.end(), greater<int>()); // descending
            r=i; c=0; int k=0;
            while(r<n && c<n){
                grid[r][c]=diag[k++];
                r++; c++;
            }
        }
        
        // top-right (excluding main diagonal)
        for(int j=1;j<n;j++){
            vector<int>diag;
            int r=0, c=j;
            while(r<n && c<n){
                diag.push_back(grid[r][c]);
                r++; c++;
            }
            sort(diag.begin(), diag.end()); // ascending
            r=0; c=j; int k=0;
            while(r<n && c<n){
                grid[r][c]=diag[k++];
                r++; c++;
            }
        }
        
        return grid;
    }
};
