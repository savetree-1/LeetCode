class Solution {
public:
    int robRange(vector<int>& nums, int l, int r) {
        int prev=0, curr=0;
        for(int i=l;i<=r;i++){
            int temp=max(curr, prev+nums[i]);
            prev=curr;
            curr=temp;
        }
        return curr;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        return max(robRange(nums, 0, n-2), robRange(nums, 1, n-1));
    }
};
