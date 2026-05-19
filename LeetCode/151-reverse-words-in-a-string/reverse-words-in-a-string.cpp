class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.size();
        int i = n - 1;
        while(i >= 0)
        {
            while(i >= 0 && s[i] == ' ')
            {
                i--;
            }
            if(i < 0) break;
            int j = i;
            while(j >= 0 && s[j] != ' ')
            {
                j--;
            }
            res += s.substr(j + 1, i - j);
            res += ' ';
            i = j - 1;
        }
        if(!res.empty())
        {
            res.pop_back();
        }
        return res;
    }
};