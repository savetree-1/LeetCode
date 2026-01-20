
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (x == 2) {
                ans[i] = -1;
                continue;
            }

            int cnt = 0;
            int tmp = x;

            while (tmp & 1) {
                cnt++;
                tmp >>= 1;
            }

            ans[i] = x - (1 << (cnt - 1));
        }

        return ans;}
};
