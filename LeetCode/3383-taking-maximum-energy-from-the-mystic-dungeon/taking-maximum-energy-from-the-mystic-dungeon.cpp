class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        vector<int>dp(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if(i+k<n)dp[i]+=dp[i+k];
            dp[i]+=energy[i];
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};