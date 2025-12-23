class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end(), [](auto &a,auto &b)
        {
            return a[1]<b[1];
        });
        int n=events.size();
        vector<int>pref(n);
        pref[0]=events[0][2];
        for(int i =1;i<n;i++)
        {
            pref[i]=max(pref[i-1],events[i][2]);
;       }
        int ans = pref[n-1];
        for(int i=0;i<n;i++)
        {
            int lo=0;
            int ho=i-1;
            int idx=-1;
            while(lo<=ho)
            {
                int mid=lo+(ho-lo)/2;
                if(events[mid][1]<events[i][0])
                {
                    idx=mid;
                    lo=mid+1;
                }
                else
                {
                    ho=mid-1;
                }
            }
            if(idx!=-1)
            {
                ans=max(ans,pref[idx]+events[i][2]);
            }}
            return ans;

    }
};


