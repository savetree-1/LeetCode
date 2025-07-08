class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        int prev=nums[0];
        int prod_negative=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)swap(prev,prod_negative);
            prev=max(nums[i],nums[i]*prev);
            prod_negative=min(nums[i],nums[i]*prod_negative);
            prod=max(prod,prev);
        }
        return prod;
    }
};