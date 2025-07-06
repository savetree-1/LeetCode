class Solution {
public:
    bool check(vector<int>&bloomDay,int m,int k,int d)
    {
        int total=0;int adj=0;
        for(int day:bloomDay)
        {
            if(day<=d)
            {
                adj++;
                if(adj==k)
                {
                    total++;
                    adj=0;
                }
            }
            else
            {
                adj=0;
            }
        }
        return total>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k)
    {
        long long maxi=1LL*m*k;int ans=-1;
        if(maxi>bloomDay.size())return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(bloomDay,m,k,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;

    }
};