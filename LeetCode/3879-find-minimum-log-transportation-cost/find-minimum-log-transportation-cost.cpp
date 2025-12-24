class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost1=0;
        long long  cost2=0;
        if(n/k>0)cost1=1LL*k*(n-k);
        if(m/k>0)cost2=1LL*k*(m-k);
        return cost1+cost2;
    }
};
