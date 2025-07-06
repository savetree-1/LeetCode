class Solution {
public:
    bool check(vector<int>& piles,int h,int k) {
        if(k<=0)return false;
        long long hours=0;
        for (int num:piles)
            hours+=ceil((double)num/k); 
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles,int h) {
        int low=1;int high=*max_element(piles.begin(),piles.end());
        int ans=1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(piles,h,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};