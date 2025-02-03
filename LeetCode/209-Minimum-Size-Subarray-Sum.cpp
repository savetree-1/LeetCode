/*
By  :-: savetrees
Used:-: Sliding Window Approach
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=nums.size()+1;
        int low=0,high=0,sum=0;
        while(high<nums.size()){
            sum+=nums[high++];
            while(sum>=target) {
                mini=min(mini,high-low);
                sum-=nums[low++];
            }
        }
        return(mini==nums.size()+1)?0:mini;
    }
};
