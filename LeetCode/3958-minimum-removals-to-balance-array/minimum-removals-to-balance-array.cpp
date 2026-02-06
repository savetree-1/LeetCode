typedef long long ll;
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int low=0;
        int best=0;
        for (int i=0;i<n;i++) {
            while((ll)nums[i]>(ll)nums[low]*k) {
                low++;
            }
            best=max(best,i-low+1);
        }
        return n-best;
    }
};
