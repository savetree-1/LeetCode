/*
By   :: savetrees
Used :: Optimal using Extra Space
*/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> dummy(nums.size());
        int left=0,right=nums.size()-1,cnt=0;
        for (int num:nums) {
            if (num<pivot)dummy[left++]=num;
            else if(num==pivot)cnt++;
        }
        int mid=left;
        while(cnt--)dummy[left++]=pivot;
        for (int num:nums) {
            if(num>pivot)dummy[left++]=num;
        }
        return dummy;
    }
};
