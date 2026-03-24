class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
    int rows=grid.size();
    int cols=grid[0].size();
    int tot=rows*cols;
    vector<int>pref(tot,1),suff(tot,1);
    vector<long long>arr;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr.push_back(grid[i][j]);
        }
    }
    for(int i=1;i<tot;i++)
    {
        pref[i]=(pref[i-1]*arr[i-1])%12345;
        suff[tot-i-1]=(suff[tot-i]*arr[tot-i])%12345;
    }
    for(int i=0;i<tot;i++)
    {
        arr[i]=(pref[i]*suff[i])%12345;
    }
    int cnt=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            grid[i][j]=arr[cnt++];
        }
    }
    return grid;
}
/*
1    2    3  4
1    1    2  6
24   12   6  1   
*/
};