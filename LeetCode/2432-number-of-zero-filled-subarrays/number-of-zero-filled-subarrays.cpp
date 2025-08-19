class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        long long ans=0,c=0;
        for(int x:a) ans += x==0 ? ++c : (c=0);
        return ans;
    }
};
