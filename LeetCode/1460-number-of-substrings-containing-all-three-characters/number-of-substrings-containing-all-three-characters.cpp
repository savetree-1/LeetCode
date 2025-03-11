/*
By   :: savetrees
Used :: Sliding Window ( Bit More Efficient)
*/
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3]={0,0,0},low=0,res=0;
        for (int high=0;high < s.length();high++) {
            count[s[high]-'a']++;
            while (count[0]&&count[1]&&count[2]) {
                res += s.length()-high;
                count[s[low++]-'a']--;
            }
        }
        return res;
    }
};
