class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int value = 0;
        for(int digit : nums) {
            value = (value * 2 + digit) % 5;
            result.push_back(value == 0);
        }
        return result;
    }
};
