/*
By   :: savetrees
Used :: Binary Search
*/
typedef long long ll;
class Solution {
public:
    ll check(vector<int>&piles,int h,int mini)
    {
        ll cnt=0;
        for(int num:piles)cnt+=ceil((double)num/mini);
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int mini=1;
        int low=mini;
        int high=maxi;
        while(low<=high){
        int mid=low+(high-low)/2;
        if (check(piles,h,mid)<=h)high=mid-1; 
        else low=mid+1;
    }
        return low;
    }
};