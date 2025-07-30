class Solution {
public:
    int change(int amt,vector<int>& coins ){
        vector<unsigned long long>dp(amt+1,0);
        dp[0]=1;
        for(int coin:coins){
        for(int i=1;i<=amt;i++)
        {
            
                if(i-coin>=0)
                {
                    dp[i]+=dp[i-coin];
                }
            }
        }
        return dp[amt];
    }
};