class Solution {
public:
    bool isSubsequence(string s, string t) {
        int low=0;
        for(int i=0;i<t.size();i++)
        {
            if(s[low]==t[i])
            {
                low++;
            }
            if(low==s.size())return true;
        }
        if(low==s.size())return true;
        return false;
    }
};