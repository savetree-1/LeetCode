class Solution {
public:
    int uniquePaths(int m, int n) {
        long long total=m+n-2;
        int r=min(n-1,m-1);
        int res=1;
        for(int i=1;i<=r;i++)
        {
            res=res*(total-r+i)/i;    
        }
        return res;
    }
};