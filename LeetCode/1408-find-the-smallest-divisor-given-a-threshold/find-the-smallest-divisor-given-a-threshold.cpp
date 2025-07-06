class Solution {
public:
    bool func(vector<int>&nums,int threshold,int mid)
    {
        long long sum=0;
        for(int num:nums)
        {
            sum+=ceil((double)num/mid);
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(threshold==nums.size())return *max_element(nums.begin(),nums.end());
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=high;
        //sort(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(func(nums,threshold,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        } 
        return ans;  
    }
};