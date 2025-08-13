class Solution {
public:
    bool isPowerOfThree(int x) {
        if(x<=0)return false;
        double val=log(x) / log(3);
        return fabs(val-round(val)) < 1e-10; 
    }
};