class Solution {
public:
    bool isPowerOfThree(int n) {
    double check=log10(n)/log10(3);
    return (( n>0 && floor(check)==check));
    }
};