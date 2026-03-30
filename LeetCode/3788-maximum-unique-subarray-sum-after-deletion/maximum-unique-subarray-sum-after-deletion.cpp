class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int mini = INT_MIN;
        int sum = 0;
        bool hasNonNeg = false;  

        for(auto x : st)
        {
            if(x < 0)
            {
                mini = max(x, mini);
            }
            else
            {
                sum += x;
                hasNonNeg = true;   
            }
        }

        if(hasNonNeg) return sum; 
        return mini;  
    }
};