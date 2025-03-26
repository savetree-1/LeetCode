/*
By   :: savetrees
Used :: Median Based Approach
*/
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>nums;
        for(auto &row:grid)
            for(auto &cell:row)
                nums.push_back(cell);
        sort(nums.begin(), nums.end());
        int median=nums[nums.size()/2],ops=0;
        for(int num: nums){
            if((num-median)%x!=0) return-1;
            ops+=abs(num-median)/x;
        }
        return ops;
    }
};