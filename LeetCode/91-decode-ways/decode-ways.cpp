class Solution {
public:
    int solve(string s,vector<int>&dp,int i)
    {
        if(i==s.length())return 1;
        if(s[i]=='0')return 0;
        if(dp[i]!=-1)return dp[i];
        int res=solve(s,dp,i+1);
        if(i+1<s.size() && (s[i]=='1'||(s[i]=='2' && s[i+1]<='6')))
        res+=solve(s,dp,i+2);
        return dp[i]=res;
    }
    int numDecodings(string s)
    {
      int n=s.length();
      vector<int>dp(n,-1);
      return solve(s,dp,0); 
    }
};