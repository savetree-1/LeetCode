/*
By  :-: savetrees
Used:-: Straight Forward
*/
class Solution {
public:
    void reverse(vector<int>&nums,int low,int high)
    {
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;high--;
        }
    }
    bool check(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                reverse(nums,0,i);
                reverse(nums,i+1,nums.size()-1);
                reverse(nums,0,nums.size()-1);
                break;
            }
        }
        return is_sorted(nums.begin(),nums.end());
    }
};