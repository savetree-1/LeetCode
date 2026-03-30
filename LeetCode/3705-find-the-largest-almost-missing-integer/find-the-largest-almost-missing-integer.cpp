class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        if (k == 1) {
            unordered_map<int,int> mp;
            for (int i = 0; i < n; i++) {
                mp[nums[i]]++;
            }

            int ans = -1;
            for (auto &p : mp) {
                if (p.second == 1) {
                    ans = max(ans, p.first);
                }
            }
            return ans;
        }

        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[0]) count1++;
            if (nums[i] == nums[n - 1]) count2++;
        }

        if (count1 == 1 && count2 == 1) {
            return max(nums[0], nums[n - 1]);
        }
        else if (count1 == 1) {
            return nums[0];
        }
        else if (count2 == 1) {
            return nums[n - 1];
        }

        return -1;
    }
};