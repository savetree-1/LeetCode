class Solution {
private:
    void oper(vector<int>& nums, int &ct) {
        int n = nums.size();
        int minPairIndex = -1;
        int pairSum = 0;
        int minSum = 99999999;

        while (!is_sorted(nums.begin(), nums.end())) {
            minSum = 99999999;

            for (int i = 0; i < n - 1; i++) {
                pairSum = nums[i] + nums[i + 1];
                if (pairSum < minSum) {
                    minSum = pairSum;
                    minPairIndex = i;
                }
            }

            nums.erase(nums.begin() + minPairIndex, nums.begin() + minPairIndex + 2);
            nums.insert(nums.begin() + minPairIndex, minSum);
            ct++;

            n = nums.size();
        }
    }

public:
    int minimumPairRemoval(vector<int>& nums) {
        int ct = 0;

        if (is_sorted(nums.begin(), nums.end())) {
            return 0;
        }

        oper(nums, ct);
        return ct;
    }
};