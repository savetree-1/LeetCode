class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0,ans = 0;
        for (; i<n-2; i++){
            if (nums[i] == 1) continue;
            ans++;
            for (int j = i; j<i+3; j++){
                nums[j] = !nums[j];
            }
        }
        if (nums[i] == 0 || nums[i+1] == 0) return -1;
        return ans;
    }
};