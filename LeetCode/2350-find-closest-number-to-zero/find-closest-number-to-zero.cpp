class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        map<int,vector<int>>mpp;
        for(int num:nums)
        {
            mpp[abs(0-num)].push_back(num);
        }
        auto it=mpp.begin();
        return *max_element(it->second.begin(),it->second.end());
    }
};