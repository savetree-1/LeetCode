/*
By   :: savetrees
Used :: Exponentiation
*/
class Solution {
public:
    double myPow(double x, int n) {
        long long k=n;
        if(k<0)k=-k;
        double res=1.0;
        while(k)
        {
            if(k%2==1)res*=x;
            x*=x;
            k/=2;
        }
        if(n>0)return res;
        return 1/res;
    }
};