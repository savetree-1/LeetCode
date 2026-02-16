class Solution {
public:
    int reverseBits(int n) {
        string s;
        while (n)
        {
            s.push_back(n % 2 == 1 ? '1' : '0');
            n >>= 1;
        }
        const int len = s.size();
        for (int i = 0; i < 32 - len; ++ i)
            s.push_back('0');
        int res = 0;
        for (int i = 1; i < 32; ++ i)
        {
            res = res * 2 + (s[i] == '1');
        }
        
        return res;
    }
};