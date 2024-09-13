class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++) {
            auto it=find(nums.begin(), nums.begin()+i,target-nums[i]);
            if (it!=nums.begin()+i) {
                int index=it-nums.begin();
                return {index,i};}}
        return {}; }};
