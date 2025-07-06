class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        int low=0;int high=x/2;int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(1LL*mid*mid==x)return mid;
            else if(1LL*mid*mid<x){ans=mid;low=mid+1;}
            else high=mid-1;
        }
        return ans;
    }
};