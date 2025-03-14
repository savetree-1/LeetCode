/*
By   :: savetrees
Used :: Binary Search
*/
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        long long int total = 0;
        for(int i = 0;i < n;i++)
            total += candies[i];
        if(total < k)
            return 0;
        long long int l = 1;
        long long int r = total;
        long long int m;
        long long int ans = 0;
        while(l <= r)
        {
            m = l + (r - l)/2;
            long long int count = 0;
            for(int candie : candies)
            {
                count += candie/m;
            }
            if(count >= k)
            {
                ans = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }
        return ans;
    }
};