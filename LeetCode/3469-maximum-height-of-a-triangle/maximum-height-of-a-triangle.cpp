class Solution {
public:
    
    int solve(long a, long b) {
        long x = sqrt(a);
        long y = (sqrt(1 + 4.0 * b) - 1) / 2;
        
        if (x > y) return 2 * y + 1;
        if (x < y) return 2 * x;
        return 2 * x;
    }
    
    int maxHeightOfTriangle(int red, int blue) {
        return max(solve(red, blue), solve(blue, red));
    }
};