class Solution {
public:
    int numOfWays(int n) {
        const long long mod = 1000000007;
        if (n == 1) return 12;
        if (n == 2) return 54;
        long long t2 = 12;
        long long t1 = 54; 
        long long tn = 0;
        for (int i = 3; i <= n; i++) {
            tn = (5 * t1 % mod - 2 * t2 % mod + mod) % mod;
            t2 = t1;
            t1 = tn;
        }
        
        return (int) tn;
    }
};
