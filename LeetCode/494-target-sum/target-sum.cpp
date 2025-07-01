/*
By   :: savetrees
Used :: Memoization
*/
typedef vector<int> vi;
typedef vector<vi> vvi;
class Solution {
public:
    int findTargetSumWays(vi& nums, int target) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if((target+total)%2!=0||abs(target) > total) return 0;
        int subsetSum=(target+total)/2;
        return func(nums,subsetSum);
    }
    int func(vi &arr, int target) {
        vi dp(target+1,0);
        dp[0]=1;
        for(int num:arr)
        {
            for(int j=target;j>=num;j--)
            {
                dp[j]+=dp[j-num];
            }
        }
        return dp[target];
    }
};
