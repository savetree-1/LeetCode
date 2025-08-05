class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int n=f.size();
        int m=b.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[j]>=f[i] && b[j]>=0)
                {       
                    b[j]=-1;
                    cnt++;
                    break;
                }
            }
        }
        return n-cnt;

    }
};