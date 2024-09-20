/*
By    :: savetrees
Used  :: Straight Forward
*/
class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return \\;
        string r = s;
        reverse(r.begin(),r.end());
        for(int i = 0; i < n; i++) {
           if(!memcmp(s.c_str(),r.c_str()+i,n-i))
            return r.substr(0,i) + s;
        }
        return r + s;
    }
};