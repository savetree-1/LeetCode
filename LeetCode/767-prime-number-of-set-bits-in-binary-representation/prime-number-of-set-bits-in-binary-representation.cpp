class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count =0;
        for(int i = left; i<= right; i++){
            int bits = __builtin_popcount(i);
            if(isprime(bits)){
                count++;
            }

        }
        return count;
    }
    bool isprime(int val){
        if(val ==1 || val ==0) return false;
        for(int i = 2;i <val; i++){
            if(val % i ==0){
                return false;
            }
        }
        return true;
    }
};