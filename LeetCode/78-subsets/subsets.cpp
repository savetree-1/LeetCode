/*
BY    :: savetrees
USING :: Bitmasking
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        int total = 1 << n;
        for(int mask = 0; mask < total; ++mask){
            vector<int> subset;
            for(int j = 0; j < n; ++j){
                if(mask & (1 << j)){
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        return result;
    }
};
