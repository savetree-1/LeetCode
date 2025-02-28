/*
By   :: savetrees
Used :: LCS Memoization
*/
class Solution {
public:
    string lcs_(string text1,string text2) {
        int size_1=text1.size(),size_2=text2.size();
        vector<vector<int>> dp(size_1+1,vector<int>(size_2+1,0));
        for (int i=1; i <= size_1; i++) {
            for (int j=1; j <= size_2; j++) {
                if (text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        string result;
        int i=size_1,j=size_2;
        while (i>0 && j>0) {
            if (text1[i-1]==text2[j-1]) {
                result+=text1[i-1];
                i--; j--;
            } else if (dp[i-1][j]>dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
    string shortestCommonSupersequence(string str1,string str2) {
        string lcs=lcs_(str1,str2);
        string result;
        int i=0,j=0,k=0;
        while (k<lcs.size()) {
            while (i<str1.size() && str1[i] != lcs[k])
                result+=str1[i++];
            while (j<str2.size() && str2[j] != lcs[k])
                result+=str2[j++];
            result+=lcs[k++];
            i++; j++;
        }
        result+=str1.substr(i)+str2.substr(j);
        return result;
    }
};

