/*
By   :: savetrees
Used :: Using Dutch National Flag ALgorithm 
*/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size(), i = 0, j = 0, k = 0;
        vector<int> temp(n);
        for (int x : nums) if (x < pivot) temp[i++] = x;
        for (int x : nums) if (x == pivot) temp[i++] = x;
        for (int x : nums) if (x > pivot) temp[i++] = x;
        for (; k < n; k++) nums[k] = temp[k];
        return nums;
    }
};


