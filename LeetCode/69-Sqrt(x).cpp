/*
By   :-: savetrees
Used :-: Binary Search
*/
class Solution {
public:
    long long int bs(int n)
    {
        long long int low=0,high=n,mid=low+(high-low)/2;
        long long int ans=-1;
        while(low<=high)
        {
            if(mid*mid==n)
            {
                return mid;
            }
            else if(mid*mid<n)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
    int mySqrt(int x)
    {
        return bs(x);
    }
};