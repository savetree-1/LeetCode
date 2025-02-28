/*
By   :: savetrees
Used :: Dyna Prog + Space Optimized
*/
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int size_1=text1.size();
        int size_2=text2.size();
        vector<int>prev(size_2+1,0),curr(size_2+1,0);
        for(int j=0;j<=size_2;j++)prev[j]=0;
        for(int i=1;i<=size_1;i++)
        {
            for(int j=1;j<=size_2;j++)
            {
                if(text1[i-1]==text2[j-1])curr[j]=1+prev[j-1];
                else curr[j]=max(prev[j],curr[j-1]);
            }
            prev=curr;
        }
        return prev[size_2];
    }
};