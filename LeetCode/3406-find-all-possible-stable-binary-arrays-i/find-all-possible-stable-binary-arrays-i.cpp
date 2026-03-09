class Solution {
public:
int dp[201][201][2][201];
const int MOD = 1e9+7;
       int solve(int z,int o,int last,int cnt,int limit)
        {
            if(z==0 && o==0) return 1;

            if(last!=-1 && dp[z][o][last][cnt]!=-1)
                return dp[z][o][last][cnt];

            long long ans=0;

            if(z>0)
            {
                if(last!=0 || cnt<limit)
                {
                    int nc=(last==0)?cnt+1:1;
                    ans=(ans+solve(z-1,o,0,nc,limit))%MOD;
                }
            }

            if(o>0)
            {
                if(last!=1 || cnt<limit)
                {
                    int nc=(last==1)?cnt+1:1;
                    ans=(ans+solve(z,o-1,1,nc,limit))%MOD;
                }
            }

            if(last!=-1)
                dp[z][o][last][cnt]=ans;

            return ans;
        }
        int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp,-1,sizeof(dp));
        return solve(zero,one,-1,0,limit);
        }
};