class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1;
        int last = -1;
        vector<int> ans;
        for(int i =0;i<n;i++){
            if(nums[i] == target){
                first = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(nums[i] == target){
                last = i;
                break;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};