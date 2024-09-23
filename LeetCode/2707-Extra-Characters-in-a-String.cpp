/*
By    :-: savetrees
Used  :-: Dynamic Programming
*/
class Solution {
public:
int n;
int dp[51];
unordered_set<string>st;
int f(int idx,string &s)
{
   if(idx>=n) return 0;
   if(dp[idx]!=-1) return dp[idx];
   string curstring="";
   int minextra=n;
   for(int i=idx;i<n;i++)
   {
     curstring.push_back(s[i]);
     int curextra=(st.find(curstring)==st.end())?curstring.length():0;
     int nextextra=f(i+1,s);
     int totalextra=curextra+nextextra;
     minextra=min(totalextra,minextra);
   }
   return dp[idx]=minextra;
}
    int minExtraChar(string s, vector<string>& dictionary) {
       n=s.length();
       memset(dp,-1,sizeof(dp));
       for(string &s:dictionary) st.insert(s); 
       return f(0,s);
    }
};