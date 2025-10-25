class Solution {
public:
    void dfs(vector<vector<int>>&image,int i,int j,int color,int curr)
    {
         int n = image.size();
        if(n == 0) return;
        int m = image[0].size();
        if(m == 0) return;

        //int curri=image[i][j];
        if(i<0 || i>=n || j<0 || j>=m||curr!=image[i][j])return;
        image[i][j]=color;
        dfs(image,i+1,j,color,curr);
        dfs(image,i-1,j,color,curr);
        dfs(image,i,j-1,color,curr);
        dfs(image,i,j+1,color,curr);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int curr=image[sr][sc];
       if(curr != color) dfs(image,sr,sc,color,curr);
       return image;
    }
};