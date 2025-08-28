class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) { int n=grid[0].size();
       
       for(int i=0;i<n;i++)
       {
            int row=i,col=0; 
            vector<int>diag;
            while(row<n && col<n)
            {
                diag.push_back(grid[row][col]);
                row++;col++;
            }
            sort(diag.begin(),diag.end(),greater <int>());
            row=i,col=0;int k=0;
            while(row<n && col<n)
            {
                grid[row][col]=diag[k++];
                row++;col++;
            }
       }
       for(int i=1;i<n;i++)
       {
            int row=0,col=i; 
            vector<int>diag;
            while(row<n && col<n)
            {
                diag.push_back(grid[row][col]);
                row++;col++;
            }
            sort(diag.begin(),diag.end());
            row=0,col=i;int k=0;
            while(row<n && col<n)
            {
                grid[row][col]=diag[k++];
                row++;col++;
            }
       }
       return grid;
    }
};