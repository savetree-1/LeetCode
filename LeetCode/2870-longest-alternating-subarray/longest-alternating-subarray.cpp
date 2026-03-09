class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int prev = nums[0];
        int count = 1;
        int maxi = -1;
        int check = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            int curr = nums[i];
            if(check && curr == prev + 1)
            {
                count++;
                check = !check;
                prev = curr;
            }
            else if(!check && curr == prev - 1)
            {
                count++;
                check = !check;
                prev = curr;
            }
            else
            {
                maxi = max(maxi, count);
                if(nums[i-1] + 1 == curr)
                {
                    count = 2;
                    check = 0;
                }
                else
                {
                    count = 1;
                    check = 1;
                }
                prev = curr;
            }
        }
        maxi = max(maxi, count);
        if(maxi < 2)
        {
            return -1;
        }
        return maxi;
    }
};