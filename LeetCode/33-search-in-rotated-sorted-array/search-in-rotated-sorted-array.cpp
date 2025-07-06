class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;int high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high])low=mid+1;
            else high=mid;
        }
        int ans=low;
        low=0;
        high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[(mid+ans)%nums.size()]==target)return (mid+ans)%nums.size();
            else if(nums[(mid+ans)%nums.size()]>target)high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};