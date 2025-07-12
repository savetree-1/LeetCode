class Solution {
public:
    int func(int i,vector<int>&nums)
    {
        if(i==0)return nums[0];
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<nums.size();i++)
        {
            int pick=nums[i];
            if(i>1)pick+=prev2;
            int not_=prev;
            int res=max(not_,pick);
            prev2=prev;
            prev=res;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        return func(nums.size()-1,nums);
    }
};