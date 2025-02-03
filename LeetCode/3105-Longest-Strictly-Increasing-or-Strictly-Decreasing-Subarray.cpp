/*
By  :-: savetrees
Used:-: Straight Forward
*/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int maxi=1;
        int maxi2=1;
        int dec=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
            {
                inc++;
                maxi=max(maxi,inc);
            }
            else
            {
                inc=1;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])
            {
                dec++;
                maxi2=max(maxi2,dec);
            }
            else
            {
                dec=1;
            }
        }
        return max(maxi,maxi2);
    }
};