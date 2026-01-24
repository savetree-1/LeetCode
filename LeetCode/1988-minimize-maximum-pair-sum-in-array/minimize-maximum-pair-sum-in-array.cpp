class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());        
        int left = 0;
        int right = n-1;
        int maxPair = 0;
        while(right > left) {
            maxPair = max(maxPair, nums[left]+nums[right]);
            left++;
            right--;
        }
        return maxPair;
    }
};