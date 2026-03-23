class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int len = 1;
        int maxi = 1;
        int n = nums.size();

        while(i + k < n - 1) {
            bool flag1 = false;
            bool flag2 = false;

            if(nums[i] < nums[i+1]) {
                flag1 = true;
            }

            if(nums[i+k] < nums[i+k+1]) {
                flag2 = true;
            }

            if(flag1 && flag2) {
                len++;
                if(len > maxi) maxi = len;
            } else {
                len = 1;
            }

            i++;
        }

        return maxi >= k;
    }
};