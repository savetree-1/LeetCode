/*
By  :-: savetrees
Used:-: Straight Forward 
*/
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int sum=nums[0];
        int maxi=0;
        int low=0;
        while(low<nums.size()-1)
        {
            if(nums[low+1]>nums[low])
            {
                sum+=nums[low+1];
            }
            else
            {
                maxi=max(maxi,sum);
                sum=nums[low+1];
            }
            low++;
        }
        return max(maxi,sum); 
    }
};