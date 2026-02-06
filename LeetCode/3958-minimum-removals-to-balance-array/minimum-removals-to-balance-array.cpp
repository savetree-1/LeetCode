typedef long long ll;
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int low=0;
        int best=0;
        for (int high=0;high<n;high++) {
            while((ll)nums[high]>(ll)nums[low]*k) {
                low++;
            }
            best=max(best,high-low+1);
        }
        return n-best;
    }
};
