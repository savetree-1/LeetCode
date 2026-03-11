class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        
        unordered_map<int,int> mpp;
        for(int x:nums) mpp[x]++;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                sum+=nums[i];
            }
            else
            {
                break;
            }
        }

        while(mpp[sum]!=0)
        {
            sum++;
        }

        return sum;
    }
};