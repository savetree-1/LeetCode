class Solution {
public:
    void allCombs(string & digits,unordered_map<char,string>&mpp,string s,int idx,vector<string>&ans)
    {
        if(idx==digits.size())
        {
            ans.push_back(s);
            return;
        }
        for(char c:mpp[digits[idx]])
        {
            allCombs(digits,mpp,s+c,idx+1,ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> ans;
        allCombs(digits, mpp, "", 0,ans);
        return ans;
    }
};