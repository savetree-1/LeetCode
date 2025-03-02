/*
By   :: savetrees
Used :: Hashmap
*/
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mpp;
        for(int i=0;i<nums1.size();i++)
        {
            mpp[nums1[i][0]] += nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++)
        {
            mpp[nums2[i][0]] += nums2[i][1];
        }
        vector<vector<int>>arr;
        for(auto pair:mpp)
        {
            vector<int>dummy;
            dummy.push_back(pair.first);
            dummy.push_back(pair.second);
            arr.push_back(dummy);
        }
        return arr;
    }
};