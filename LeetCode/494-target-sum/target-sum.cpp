/*
By   :: 
Used :: Tabulation
*/
typedef vector<int> vi;
typedef vector<vi> vvi;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
    int total = 0;
    for (int x : nums) total += x;

    if ((target + total) % 2 != 0 || target > total || target < -total) return 0;

    int subsetSum = (target + total) / 2;

    vector<int> dp(subsetSum + 1, 0);
    dp[0] = 1;

    for (int num : nums) {
        for (int s = subsetSum; s >= num; --s) {
            dp[s] += dp[s - num];
        }
    }

    return dp[subsetSum];
}

};
