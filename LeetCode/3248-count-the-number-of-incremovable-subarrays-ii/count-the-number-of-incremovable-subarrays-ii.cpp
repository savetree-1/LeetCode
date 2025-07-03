#define ll long long
class Solution {
public:
    long long incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int i = n-1;
        for(int k=0; k<n-1; k++){
            if(nums[k] >= nums[k+1]){
                i = k;
                break;
            }
        }
        int j = 0;
        for(int k=n-1; k>0; k--){
            if(nums[k] <= nums[k-1]){
                j = k-1;
                break;
            }
        }
        ll cnt = 0;
        for(int k=j; k<n; k++){
            ll nxt = k+1<n ? nums[k+1] : 1e10;
            int r = min(k-1, i); int l = 0;
            int ans = -1;
            while(l <= r){ 
                int m = (l + r)/2;
                if(nums[m] >= nxt) r = m - 1;
                else{
                    ans = max(ans, m);
                    l = m + 1;
                }
            }
            cnt += (ans + 2);
        }
        return cnt;
    }
};