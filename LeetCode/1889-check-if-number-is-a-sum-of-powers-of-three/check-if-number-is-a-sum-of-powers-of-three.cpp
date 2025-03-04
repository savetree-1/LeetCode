class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n<=0)
        {
            return true;
        }
        while(n>0)
        {
            if(n%3==2)return false;
            n/=3;
        }
        return true;
    }
};