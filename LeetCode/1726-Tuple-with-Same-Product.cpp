/*
By   ::savetrees
Used ::Unordered Map
*/
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int product=nums[i]*nums[j];
                res+=mpp[product]*8;
                mpp[product]++;
            }
        }
        return res;
    }
};