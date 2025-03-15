class Solution {
public:
    bool canRob(vector<int>& nums, int k, int cap) {
        int count=0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] <= cap) { 
                count++;
                i++; 
            }
            if (count >= k) return true; 
        }
        return false;
    }
    int minCapability(vector<int>& nums, int k) {
        int low=*min_element(nums.begin(), nums.end());
        int high=*max_element(nums.begin(), nums.end());
        while (low<high) {
            int mid=(low+high)/2;
            if (canRob(nums, k, mid)) high=mid; 
            else low=mid+1; 
        }
        return low;
    }
};