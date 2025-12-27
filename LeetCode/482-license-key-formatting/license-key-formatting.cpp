class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string t = "";
        for(char c : s) {
            if(c != '-') t += toupper(c);
        }
        string res = "";
        int cnt = 0;
        for(int i = t.size() - 1; i >= 0; i--) {
            if(cnt == k) {
                res += '-';
                cnt = 0;
            }
            res += t[i];
            cnt++;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
