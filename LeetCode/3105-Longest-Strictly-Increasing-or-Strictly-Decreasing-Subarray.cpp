/*
By  :-: savetrees
Used:-: Straight Forward
*/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int maxi=1;
        int dec=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
            {
                inc++;
                dec=1;
                maxi=max(maxi,inc);
            }
            else if (nums[i]<nums[i-1])
            {
                dec++;
                inc=1;
                maxi=max(maxi,dec);
            }
            else
            {
                inc=1;
                dec=1;
            }
        }
        
        return maxi;
    }
};