class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n)k=n-1;
        for(int i=0;i<n-1;i++)
        {
            if(i+k>=n)k=n-i-1;
            for(int temp=1;temp<=k;temp++)
            {
                if(nums[i]==nums[i+temp])return true;
            }
        }
        return false;
    }
};