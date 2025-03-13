class Solution {
public:
    void heap_sort(vector<int>&nums)
    {
        make_heap(nums.begin(),nums.end());
        sort_heap(nums.begin(),nums.end());
    }
    vector<int> sortArray(vector<int>& nums) {
        heap_sort(nums);
        return nums;
    }
};