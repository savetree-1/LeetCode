class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = INT_MAX;
        int sz = nums.size();

        for (int i = 0; i < sz; i++) {
            int n = l;
            while (n <= r) {
                if (i + n > sz) break;

                int sum = 0;
                for (int j = i; j < i + n; j++) {
                    sum += nums[j];
                }

                if (sum > 0) mini = min(mini, sum);
                n++;
            }
        }

        return (mini == INT_MAX ? -1 : mini);
    }
};
