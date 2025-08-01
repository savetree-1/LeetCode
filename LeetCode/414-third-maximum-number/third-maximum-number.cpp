class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maxi=LONG_MIN;
        long long secmaxi=LONG_MIN;
        long long thirdmaxi=LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                thirdmaxi=secmaxi;
                secmaxi=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>secmaxi && nums[i]<maxi)
            {
                thirdmaxi=secmaxi;
                secmaxi=nums[i];
            }
            else if(nums[i]>thirdmaxi && nums[i]<secmaxi)
            {
                thirdmaxi=nums[i];
            }
        }
        if(thirdmaxi!=LONG_MIN)return thirdmaxi;
        else return maxi;
    }
};