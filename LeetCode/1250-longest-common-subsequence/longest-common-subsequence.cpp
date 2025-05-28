/*
By    :::: savetrees
Using :::: Memoizaton
*/
class Solution {
public:
    int dp[1001][1001];
    int f(string&a,string&b,int i,int j){
    if(i==0||j==0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(a[i-1]==b[j-1])return dp[i][j]=1+f(a,b,i-1,j-1);
    return dp[i][j]=max(f(a,b,i-1,j),f(a,b,i,j-1));
    }
    int longestCommonSubsequence(string a,string b){
    memset(dp,-1,sizeof(dp));
    return f(a,b,a.size(),b.size());
    }

};