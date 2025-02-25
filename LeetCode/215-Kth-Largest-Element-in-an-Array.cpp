class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        vector<int>count(maxi-mini+1,0);
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]-mini]++;
        }
        int sum=0;
        for(int i=count.size()-1;i>=0;i--)
        {
            sum+=count[i];
            if(sum>=k)
            return mini+i;
        }
        return -1;
    }
};