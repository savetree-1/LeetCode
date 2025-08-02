class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[n-1]<=0)return nums[n-1]*nums[n-2]*nums[n-3];
        int case1=nums[n-1]*nums[n-2]*nums[n-3];
        int case2=nums[0]*nums[1]*nums[n-1];
        int case3=nums[0]*nums[n-1]*nums[1];
        return max({case1,case2,case3});
    }
};