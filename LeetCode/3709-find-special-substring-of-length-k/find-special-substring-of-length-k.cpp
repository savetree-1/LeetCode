class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        for(int i = 0; i <= n - k; i++) {
            bool ok = true;
            for(int j = i; j < i + k; j++) {
                if(s[j] != s[i]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) continue;
            if(i > 0 && s[i] == s[i - 1]) continue;
            if(i + k < n && s[i] == s[i + k]) continue;
            return true;
        }
        return false;
    }
};