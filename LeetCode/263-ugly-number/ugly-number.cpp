class Solution {
public:
    bool isPrime(int n)
    {
        if(n<2)return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
    bool isUgly(int n) {
        if(n==0)return false;
        //if(n>5 && isPrime(n))return false;
        int num=n;
        while(n%2==0 || n%3==0|| n%5==0)
        {
            if(n%2==0)n/=2;
            else if(n%3==0)n/=3;
            else if(n%5==0)n/=5;
        }
        return n==1;
    }
};