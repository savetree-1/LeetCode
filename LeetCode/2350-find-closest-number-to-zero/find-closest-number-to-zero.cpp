class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int diff=INT_MAX;
        for(int num:nums)
        {
            if(abs(num-0)<abs(diff))
            {
                diff=num-0;
            }
            else if(abs(num-0)==abs(diff))
            {
                diff=max(diff,num-0);          
            }
        }
        return diff;
    }
};