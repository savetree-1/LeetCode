/*
By   :: savetrees
Used :: Unordered Map & long long for Overflow prevention + Calculated No. of Good Pairs
Total Pairs = nC2=n!/2!*(n-2)!  => n*(n-1)/2
No. of Bad Pairs = Total - Good Pairs
*/
typedef long long ll;
class Solution {
public:
    ll countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        ll n=nums.size();
        ll count=0;
        ll total=(n*(n-1)/2);
        for(int i=0;i<n;i++)
        {
            count+=mpp[nums[i]-i];
            mpp[nums[i]-i]++;
        }
        return total-count;
    }
};